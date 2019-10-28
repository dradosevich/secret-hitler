

// Enums
const Party = {'Unaffiliated':0, 'Facist':1, 'Liberal':2};
const Role = {'Member':0, 'Chancellor':1, 'President':2, 'Hitler':3};
const Card = {'Liberal':0, 'Facist':1, 'None':2};

// Make enums more constant and secure
// Note that this will not prevent a value change
// e.g. 
//      let p = Party.Liberal
//      p = 99 
// Will still work
Object.freeze(Party);
Object.freeze(Role);

class Hand
{
    constructor(){}

    cards = [];   
    add(card)
    {
        if(this.cards.length < 3) 
            this.cards.push(card);
    }
    choose(card)
    {
        for(i = 0; i < this.cards.length; ++i){
            if(this.cards[i] == card) return card;
        }
        if (this.cards.length == 0) throw "No Hand [# 100]";
        else throw "Requested Card Does Not Exist [# 101]";
    }

    discard(card)
    {
        for (i = 0; i < this.cards.length; ++i) {
            if (this.cards[i] == card) {
                this.cards = this.cards.splice(i,1)
                return;
            }
        }
        if(this.cards.length != 0)
            throw "Requested Card Does Not Exist [# 101]";
    }
    is_empty(){ this.cards.length == 0 ? true : false;}
    size(){ return this.cards.length; }
    get(){ return this.cards; }
}

class Player
{
    party = Party.Unaffiliated;
    role = Role.Member;
    hand = new Hand();

    constructor(party, role)
    {
        this.party = party;
        this.role = role;
        this.hand = new Hand();
    }

    vote()
    {
        // get user input and return it
        // Not sure if this should go in this class or an outside one
        return;
    }

    change_role(role)
    {   
        if(role == this.role) return;
        this.role = role;
    }

    add_card(card)
    {
        // Only chancellors and presidents can have cards in hand
        if(role == Role.Chancellor)
        {
            this.hand.add(card);
        }
        else if(role == Role.President)
        {
            // President can't have more than 2 cards in hand
            if(this.hand.size < 2) this.hand.add(card);
        }
    }

    discard_card(card)
    {
        this.hand.discard(card);
    }
}