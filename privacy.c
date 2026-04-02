/* CREA UNA LISTA */

struct StructElem{

	int durata;
	char persona_intercettata[30];
	char persona_con_cui_parla[101];
	float argomento;
	
};

typedef struct StructElem TipoElem;

struct StructNodo{
	
	TipoElem info;
	StructLista * next;
	
};

typedef struct StructNodo TipoNodo;

typedef TipoNodo * TipoListaInt;
typedef TipoNodo * PuntTipoNodo;



void eser1(TipoListaInt it, float priv1, float priv2){
	
	int count_int, count_arg_min, count_arg_mag;
	float media_arg, count_arg;
	
	while(it){
		if(it->info.argomento >= priv1 && it->info.argomento <= priv2 ){
			count_int += 1;
			count_arg += it->info.argomento
		}
		
		it = it->next;
		
	}
	
	
	media_arg = count_arg / count_int;
	
	while(it){
		if(it->info.argomento < priv1){
			count_arg_min += 1;
		}
		
		if(it->info.argomento > priv2){
			count_arg_mag += 1;
		}
		
		it = it->next;
		
	}


return;
}







eser2(TipoListaInt *daTagliare, char krfcg[51], float priv){
	
	PuntTipoNodo curr = *daTagliare;
	PuntTipoNodo prec = NULL;
	
	
	while(curr){
		if(curr->info.argomento >= priv || strcmp(curr->info.persona_con_cui_parla, krfcg) == 0){
			
			if(prec == NULL){
			*daTagliare = curr->next;
			}
			else{
				prec->next = curr->next;
			}
			
			
			
		}
		
		else{
			prec = curr;
			curr = curr-> next;
		}
		
	/*	if(prec == NULL){
			*daTagliare = curr->next;
		}
		else{
			prec->next = curr->next;
		}
		*/
		free(curr);
	}
	
	
return;
}
