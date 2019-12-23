typedef struct {
	ElemType * elem; 
	int length;
	int listsize;
}Sqlist;
Status InitList(Sqlist *L){
	(*L).elem = (ElemType *)malloc(LIST_INIT_SIZE*sizeof(ElemType));
	if (!(*L).elem) exit(OVERFLOW);
	(*L).length = 0;  
	(*L).listsize = LIST_INIT_SIZE;    

	return OK;  
}
Status DestroyList(Sqlist *L){
	free((*L).elem);
	(*L).elem = NULL;  
	(*L).length = 0;
	(*L).listsize = 0;
	return OK;
}
Status ClearList(Sqlist *L){
	(*L).length = 0;  
	return OK;
}
Status ListEmpty(Sqlist L){
	if (L.length == 0)
		return TRUE;
	else
		return FALSE;
}
int ListLength(Sqlist L){
	return L.length;
}
Status  GetElem(Sqlist L, int i, ElemType *e){
	if (i<1 || i>L.length)
		exit(ERROR);
	*e = L.elem[i - 1];
	return OK;
}
int  LocateElem(Sqlist L, ElemType e, Status(*compare)(ElemType, ElemType)){//compare()形参是函数指针
	
	int i = 1;           
	ElemType *p = L.elem; 
	while (i <= L.length && !(*compare)((*p++), e)){
		++i;
	}
	if (i <= L.length) return i;
	else
		return 0;
}
Status PriorElem(Sqlist L, ElemType cur_e, ElemType *pre_e){
	ElemType *p = L.elem + 1; 
	int i = 2;
	while (i <= L.length && (*p) != cur_e){ 
		p++;
		++i;
	}
	if (i>L.length){
		return ERROR;
	}
	else{
		*pre_e = (*--p);  
		return OK;
	}
}