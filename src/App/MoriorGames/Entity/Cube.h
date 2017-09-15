#ifndef APP_MORIOR_GAMES_ENTITY_CUBE_H
#define APP_MORIOR_GAMES_ENTITY_CUBE_H

namespace MoriorGames {

class Cube
{
public:
    Cube();

private:

    int id = 0, battleSetId = 0, cardId = 0, level = 0, x = 0, y = 0, turn = 0;
    bool processed;

public:

    int getId() const;

    void setId(int id);

    int getBattleSetId() const;

    void setBattleSetId(int battleSetId);

    int getCardId() const;

    void setCardId(int cardId);

    int getLevel() const;

    void setLevel(int level);

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    int getTurn() const;

    void setTurn(int turn);

    bool isProcessed() const;

    void process();

    void clear();

    void print()
    {
        printf("========= Action: \n"
                   " - id %i\n"
                   " - battleSetId %i\n"
                   " - cardId %i\n"
                   " - level %i\n"
                   " - x %i\n"
                   " - y %i\n"
                   " - turn %i\n"
                   " - processed %i\n"
                   " \n",
               id,
               battleSetId,
               cardId,
               level,
               x,
               y,
               turn,
               processed
        );
    }
};

}

#endif
