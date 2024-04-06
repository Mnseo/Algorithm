-- LEVEL2 조건에 부합하는 중고거래 상태 조회하기 (STRING, DATE)

-- STATUS의 상태에 따른 CASE 출력(END로 마쳐야 하는것 잊지 말기)
-- 'YYYY-MM-DD'로 형식이 되어있으면 date()로 처리 가능 

SELECT BOARD_ID, WRITER_ID, TITLE, PRICE, 
CASE 
WHEN STATUS = 'SALE' THEN '판매중'
WHEN STATUS = 'RESERVED' THEN '예약중'
ELSE '거래완료'
END AS STATUS_DESCRIPTION
FROM USED_GOODS_BOARD
WHERE DATE(CREATED_DATE) ='2022-10-05'
ORDER BY BOARD_ID DESC;