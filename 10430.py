A, B, C = map (int, input().split())
#map(function, iterable) 첫번쨰는 매개변수 두번째는 매개변수로는반복가능한자료형
#map은 리스트의 요소를 지정된 함수로 처리해주는 함수입니다
print((A+B)%C )
print( ((A%C) + (B%C) )%C)
print( (A*B) %C)
print(( (A%C) * (B%C) )%C)