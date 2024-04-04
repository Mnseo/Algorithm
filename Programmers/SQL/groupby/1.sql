-- Level2 자동차 종류 별 특정 옵션이 포함된 자동차 수 구하기 

-- 자동차 종류는 '세단', 'SUV', '승합차', '트럭', '리무진' 이 있습니다. 
-- 자동차 옵션 리스트는 콤마(',')로 구분된 키워드 리스트(옵션 리스트 값 예시: '열선시트', '스마트키', '주차감지센서')로 되어있으며, 
-- 키워드 종류는 '주차감지센서', '스마트키', '네비게이션', '통풍시트', '열선시트', '후방카메라', '가죽시트' 가 있습니다.

-- CAR_RENTAL_COMPANY_CAR 테이블에서 '통풍시트', '열선시트', '가죽시트' 중 
-- 하나 이상의 옵션이 포함된 자동차가 
-- 자동차 종류 별로 몇 대인지 출력하는 SQL문을 작성해주세요. 
-- 이때 자동차 수에 대한 컬럼명은 CARS로 지정하고, 
-- 결과는 자동차 종류를 기준으로 오름차순 정렬해주세요.



SELECT CAR_TYPE AS CAR_TYPE, COUNT(*) AS CARS
FROM CAR_RENTAL_COMPANY_CAR
WHERE OPTIONS LIKE '%통풍시트%' OR OPTIONS LIKE '%열선시트%' OR OPTIONS LIKE '%가죽시트%'
GROUP BY CAR_TYPE
ORDER BY CAR_TYPE ASC;