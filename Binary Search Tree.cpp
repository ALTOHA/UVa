#include <bits/stdc++.h>

using namespace std;

struct node{
	int value;
	node* left;
	node* right;
	node(int value){
		this->value = value;
		this->left = this->right = NULL;
	}
};

void create(node* root, int value){
	node* aux = root;
	
	while(1){
		if(aux->value > value){
			if(aux->left){
				aux = aux->left;
			}
			else{
				aux->left = new node(value);
				break;
			}
		}
		else{
			if(aux->right){
				aux = aux->right;
			}
			else{
				aux->right = new node(value);
				break;
			}
		}
	}
	
}

void post_order(node* root){
	if(root == NULL)
		return;
		
	post_order(root->left);
	post_order(root->right);
	printf("%d\n", root->value);
}


int main(){
	bool primer = false;
	int valor;
	
	node* root = NULL;
	
	while(scanf("%d", &valor) != EOF){
		if(primer == false){
			root = new node(valor);		
			primer = true;
		}
		else
			create(root, valor);
	}
	
	post_order(root);
	
	return 0;
}
