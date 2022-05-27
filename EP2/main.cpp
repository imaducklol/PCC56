#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
using namespace std;

void somethingFunny(mt19937 generator) {
    vector<string> jokes{"I am swift as a gazelle. An old one. With arthritis. Run over by a Land Rover. 8 days ago.", "I asked God for a bike, but I know God doesn’t work that way. So I stole a bike and asked for forgiveness.", "I didn’t fall down. I did attack the floor, though.", "I don’t need a hair stylist, my pillow gives me a new hairstyle every morning.", "I don’t suffer from insanity, I enjoy every minute of it.", "I get enough exercise pushing my luck.", "I had loads to do today. Ah well, so now I have loads to do tomorrow.", "I like to be an optimist. It pisses people off.", "I read married couples have sex about 74 times per year. It’s the end of November now. Seems I’m going to have a seriously exciting December!", "I refuse to answer that question on the grounds that I don’t know the answer.", "I refuse to have a battle of wits with an opponent so clearly unarmed.", "A train station is where the train stops. A bus station is where the bus stops. On my desk, I have a work station…", "A true optimist is the guy who falls off a skyscraper and after 50 floors thinks to himself – well, so far so good!", "According to my mirror I am pregnant. The father is Nutella.", "After millions of years of evolution, you’re kind of a disappointment.", "Alcohol does not solve any problems, but then again, neither does milk.", "Alcohol! Because no great story started with someone eating a salad.", "All my life I thought air was for free. That was until I bought a bag of potato chips.", "I speak fluent ironic with a solid sarcastic accent.", "I am in touch with my motivation. I saw it going by this morning, waving at me and winking.", "I am nobody. Nobody is perfect. I am perfect.", "I think the worst time to have a heart attack is during a game of charades.", "I used to think that you were a pain in the neck. My opinion of you has dropped significantly lower since then.", "If a man said he’ll fix it, he’ll fix it. There is no need to nag him every 6 months about it.", "He who wakes up early, yawns all day long.", "Hearing voices in your head is normal. Listening to them is quite common. Arguing with them – acceptable. It is only when you lose that argument that you get in real trouble.", "Here, have a tissue. There’s still a bit of bullshit left on your mouth.", "How many times must I flush before you finally go away?", "I am an example to others. A bad example.", "I would like to apologize to anyone whom I haven’t offended yet. Please be patient, I will get to you shortly.", "I would like to thank my arms for always being by my side, my legs for always supporting me, and my fingers, because I can always count on them.", "Change is inevitable, except from a parking meter.", "Children in the backseat cause accidents, accidents in the backseat cause children!", "Chocolate doesn’t ask any questions. Chocolate simply understands.", "Come over to the dark side…we’ve got candy.", "Confessions may be great for your soul, but they are hell for your reputation.", "Dear math exercise book, kindly grow up finally and solve your own problems!", "Dental-Chair Revelation: Once you have your mouth open, dentists lose the ability to ask questions with a simple yes or no answer.", "I would like to thank my middle finger for always sticking up for me when I needed it.", "I wouldn’t exactly say I’m lazy, but it’s a good thing that breathing is a reflex.", "I’m jealous of my parents, I’ll never have a kid as cool as them.", "A bag of money can be a symbol not only of wealth, but also of tremendous inflation.", "Do not argue with an idiot. He will drag you down to his level and beat you with experience.", "Do not let your mind wander too much. It is too small for you to let it out alone.", "Do people talk about you behind your back? Simply fart.", "Do you remember when I asked you to give me your opinion? That’s right, me neither.", "Doesn’t expecting the unexpected make the unexpected expected?", "Dogs have beloved masters. Cats have waiting staff.", "I’m never late. The others are just too early!", "I’m not clumsy, The floor just hates me, the table and chairs are bullies and the walls get in my way.", "I’m not lazy. I’m just highly motivated to do nothing.", "I’m really good at stuff until somebody watches me do that stuff.", "I’d like to help you out today. Which way did you come in?", "A bank is a place that will lend you money, if you can prove that you don’t need it.", "A broad smile is a cooler way of showing your enemies that you have teeth.", "A cookie a day keeps the sadness away. An entire jar of cookies a day brings it back.", "A good mood is like a balloon: one prick is all it takes to ruin it.", "A jellyfish has existed as a species for 500 million years, surviving just fine without a brain. That gives hope to quite a few people.", "Doing nothing is hard, you never know when you’re done.", "Don’t tell me the sky is the limit when there are footprints on the moon.", "Don’t vacuum and listen to loud music on your headphones at the same time. I finished three rooms until I realized the vacuum wasn’t even on.", "Don’t worry if plan A fails, there are 25 more letters in the alphabet.", "Don’t you wish they made a clap-on-clap-off device for some people’s mouths?", "Don’t drink while driving – you might spill the beer.", "Every rule has an exception. This rule is no exception.", "Always remember you’re unique, just like everyone else.", "An opportunist is the guy who drinks the water while the pessimist, the optimist and the realist are arguing about how full the glass is.", "Any of us has the capacity to light up a room. Some when they enter, others when they leave it.", "As long as cocoa beans grow on trees, chocolate is fruit to me.", "Before my first cup of coffee I hate everybody. That doesn’t change after I’ve had that coffee, but it feels much better.", "Birthdays are good for you. Statistics show that people who have the most live the longest.", "Experience is a wonderful thing. It enables you to recognize a mistake when you make it again.", "Fart when people hug you. You’ll make them feel strong.", "Finally, spring is here! I’m so thrilled I wet my plants.", "With a face like yours, you have a good chance in a lawsuit against your parents.", "Go bungee jumping. Your life started with a malfunctioning rubber, so it’s only right it should end that way, too.", "God created the world, everything else is made in China.", "Good thing Noah took those two coffee beans on board.", "Hard work pays off in the future. Lounging on the couch pays off right now.", "He who laughs last is a bit of a slow thinker.", "“Stressed” is just “desserts” spelled backwards.", "Stupidity knows no boundaries, but it knows a lot of people.", "Television is a medium – anything well done is rare.", "The best part of going to work is coming back home at the end of the day.", "The first five days after the weekend are the toughest.", "The leading source of computer problems is computer solutions.", "The only scenario where you really need a landline today is when you’re trying to find your cell phone.", "The perfect man doesn’t swear, doesn’t smoke, doesn’t get angry, doesn’t drink. He also doesn’t exist.", "The road to success is always under construction.", "The shortest horror story: Monday.", "The snorers are always the ones to fall asleep first.", "The true nature of a human being clearly shows when the supermarket opens a second checkout lane.", "There are days when you just want to envelop everybody with light and warmth… preferably through the use of a flamethrower.", "There are people who are living proof that total brain failure does not always lead to physical death.", "There is no lousy weather, only lousy choice of clothing.", "There was a time when I would have given myself to you, now I’m not even willing to throw up in your direction.", "They say crime doesn’t pay. So does my current job make me a criminal?", "They say good, honest work never did anybody any harm, but I don’t want even the slightest risk.", "They say money doesn’t bring you happiness. Still, it is better to verify things for yourself.", "“Whenever I’m sad, I stop being sad and be awesome instead.” — Barney Stinson", "“It’s just, eventually we’re all gonna move on. It’s called growing up.” — Lily Aldrin", "“Revenge fantasies never work out the way you want.” — Marshall Eriksen", "“Whether a gesture’s charming or alarming depends on how it’s received.” — Ted Mosby", "“I needed a plan, a plan to get over my man. And what’s opposite of man? Jam.” — Monica Gellar", "“We were on a break!” — Ross Gellar", "“How you doin’?” — Joey Tribbiani", "“They don’t know that we know they know we know.” – Phoebe Buffay", "“Everything I have I owe to this job…this stupid, wonderful, boring, amazing job.” – Jim Halpert", "“I’m not superstitious, but I am a little stitious.” – Michael Scott", "“An office is for not dying. An office is a place to live life to the fullest, to the max, to… An office is a place where dreams come true.” – Michael Scott", "“Would I rather be feared or loved? Easy. Both. I want people to be afraid of how much they love me.” – Michael Scott", "They say don’t try this at home… so I went to my friend’s home!", "My bed is a magical place I suddenly remember everything I had to do.", "Friday, my second favorite F word.", "Wine + dinner = winner", "I don’t care what people think of me. Mosquitos find me attractive!", "Stomach: I will now demonstrate a blue whale’s mating call.", "If there would be an award for being lazy, I would send someone to pick it up for me.", "They say: Do what you love and the money will come to you. Just ordered pizza, now I am waiting…", "I don’t give a ship!", "Math class is like watching a foreign movie without subtitles.", "There’s no “we” in fries.", "Be a cupcake in a world of muffins.", "Going to bed early. Not going to a party. Not leaving my house. My childhood punishments have become my adult goals.", "I stopped understanding math when the alphabet got involved.", "Never judge a book by its movie.", "Silence is golden. Unless you have kids. Then it’s suspicious.", "An idea is only stupid if it doesn’t work.", "When people tell me that I’ll regret something in the morning, I just sleep until noon. I’m a problem solver.", "Common sense is like deodorant. Those who need it most never use it.", "Think nothing is impossible? Try slamming a revolving door.", "Never ask a starfish for directions.", "Remember: Don’t insult the alligator until you cross the river.", "Smile like a monkey with a new banana.", "Some days you’re the bird. Some days you’re the statue.", "Whoever said, “Out of sight, out of mind” never had a spider disappear in their bedroom.”", "I’m not lazy. I’m relaxed.", "I put the ‘pro’ in ‘procrastinate.’", "It might look like I’m doing nothing. But, in my head, I’m quite busy.", "No one notices how hard you work until you stop working.", "My wallet is like an onion. Every time I open it, it makes me cry.", "Your bank account can always be overdrawn. It’ll never be overfilled.", "I get plenty of exercise just pushing my luck.", "Whenever I’m bored, I go to my favorite place: The fridge.", "A balanced diet is a cupcake in each hand.", "I’m glad I don’t have to hunt for my food. Where does pizza even live?", "Today I laughed until my abs were tired, so I skipped the gym.", "If you’re not supposed to eat at night, why is there a light in the refrigerator?", "Of course I talk to myself. Sometimes I need an expert opinion.", "My brain has too many tabs open.", "Life is like a bowl of soup and I’m a fork.", "If Plan A doesn’t work, we have 25 more letters to try.", "I’m never wrong. I’m just different levels of right.", "I’m not weird, I’m limited edition.", "They say the best things take time. That’s why I’m late.", "Sorry I’m late. I didn’t want to come.", "People say ‘Go big or go home’ like going home is a bad thing.", "It’s okay if you don’t like me. Not everyone has good taste.", "We can’t all be princesses. Someone has to wave when I roll by.", "Dynamite comes in small packages.", "I’d agree with you, but then we’d both be wrong.", "It’s alright if we don’t agree. I can’t force you to be right.", "I don’t need anger management. I need you to stop making me angry.", "Please cancel my subscription. I don’t have time for your issues.", "Know the difference between your opinion and a pizza? I asked for a pizza.", "The right to have an opinion heard doesn’t come with the right to be taken seriously.", "I’m not sleeping, I’m resting my eyelids.", "I’ve forgotten more than you ever knew.", "I’m not ignoring the alarm clock, I’m waiting to see who breaks first.", "Everyone is today years old when they find out coriander is dead and dry cilantro.", "It’s colder out here than a polar bear’s nipple.", "Oh wait. I just remembered. You’re boring and my legs work.", "Wow, who crapped in your cornflakes?", "I’m cooler than the other side of the pillow.", "You’re nuttier than squirrel shit.", "Is it me or is everyone else coo coo for Coco Puffs?", "BYOW: Bring your own whine.", "On vacation, will be checking my emails (check’s watch) never.", "In the immortal words of Taylor Swift, I’m going to shake you off.", "Halloween dress code requirements: whatever will get me most candy.", "“Beauty fades. Dumb is forever.” — Judge Judy", "“Don’t pee on my leg and tell me it’s raining.” — Judge Judy", "“If it doesn’t make sense, it’s not true.” — Judge Judy", "“I love the truth. If you don’t tell me the truth, you’re gonna be eating your shoes.” — Judge Judy", "“I’m the boss, Applesauce.” — Judge Judy", "“If you live to be a hundred, you will never be as smart as me. On your BEST day, you’re not as smart as *I* am on my WORST day.” — Judge Judy"};
    uniform_int_distribution<int> ztoh(0, jokes.size());
    cout << jokes[ztoh(generator)] << endl;
}


class Buffalo {
    public:
        bool isAlive;
        int hungerLevel;
        int exhaustionLevel;
        int happinessLevel;
        mt19937 generator;

        Buffalo () {
            hungerLevel = exhaustionLevel = 0;
            isAlive = true;
            generator.seed(time(NULL));
        }
        void Eat() {
            hungerLevel -= 5;
            exhaustionLevel += 2;
            Update();
        }
        void Sleep() {
            exhaustionLevel -= 5;
            hungerLevel += 2;
            Update();
        }
        void Roam() {
            hungerLevel += 1;
            exhaustionLevel += 1;
            somethingFunny(generator);
            Update();
        }
        void Grunt() {
            if (!isAlive) {
                cout << "the buffalo is dead. " << endl;
            }
        }
        void Update() {
            hungerLevel = clamp(hungerLevel, 0, 100);
            exhaustionLevel = clamp(exhaustionLevel, 0, 100);
            happinessLevel = Happiness();
            if (happinessLevel < 5) {
                isAlive = false;
            }
        }
        int Happiness() {
            return (1/(hungerLevel+1) * 10 * 1/(exhaustionLevel+1) * 10);
        }

};


int main() {
    Buffalo Bill;
    Bill.Roam();
    Bill.Roam();
    Bill.Roam();
    Bill.Roam();
    Bill.Roam();
    Bill.Roam();
    Bill.Roam();
    Bill.Roam();
    Bill.Roam();
    Bill.Grunt();
    return 0;
}

