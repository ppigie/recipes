#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

class Product
{
private:
    string name = "";
public:
    Product(string name) {
        this->name = name;
    }

    void setName(string name) 
    { this->name = name; }

    string getName()
    { return this->name; }
};
class Category
{
private:
    string name = "";
    vector<Product*>products;
public:
    void setName(string name) {
        this->name = name;
    }
    string getName() { 
        return this->name; 
    }
    void addProduct(Product* product) {
        products.push_back(product);
    }
    void showProducts() {
        for (int i = 0; i < this->products.size(); i++) {
            cout << products[i]->getName() << endl;
        }
    }
};

    void message()
    { 
        cout << "                                                 WARNING!!!                                                             " << endl;
        cout << "         This is not the console for hungry people! Please, eat first and then watch how this program works)         " << endl << endl;
        cout << "                                                    :)                                                " << endl;
        cout << "Press Enter to Continue";
        cin.ignore();
        cout << endl;
        cout << "Now, you can choose whatever dish you want to cook:" << endl;
        cout << endl;
    }

    void marmaladeRecipe(){
        cout << " 1 3/4 pounds oranges, 4 to 5 medium\n";
        cout << " 1 lemon, zest finely gratedand juiced\n";
        cout << " 6 cups water\n";
        cout << " 3 pounds plus 12 ounces sugar\n";
        cout << endl;
        cout << "Cut the oranges into 1/8-inch slices using a mandoline" << "," <<
            "removing the seeds as you go" << ".";
        cout << "Place the oranges into an 8-quart stainless steel pot" << ".\n";
        cout << "Add the lemon zest and juice and the water to the pot" << "," << "set over high heat and bring to a boil" << "," <<
            "approximately 10 minutes" << ".\n";
        cout << "Meanwhile, place a small plate in the freezer.\n";
        cout << "Then, boil for 10 minutes.";
        cout << "While the fruit is cooking, fill a large pot (at least 12-quart) 3/4 full with water, set over high heat and bring to a boil.\n";
        cout << "Add the sugar and stir the mixture continually, approximately 15 to 20 minutes.\n";
        cout << "Tilt the plate. The mixture should be a soft gel that moves slightly. If mixture is thin and runs easily, it is not ready.\n";
        cout << "Place a canning funnel onto the top of 1 of the jars and ladle in the marmalade just to below the bottom of the threads of the jar.\n" <<
            "Repeat until all of the mixture has been used.\n";
        cout << " Return the jars to the pot with boiling water, being certain that they don't touch the bottom of the pot or each other.\n" <<
            "Boil for 10 minutes.\n" <<
            "Place in a cool dry place and allow to sit at room temperature for at least 24 hours before opening.\n";
    }
    void muffinRecipe(){
        cout << "2 cups white flour;\n" <<
            "1 tablespoon baking powder;\n" <<
            "1 / 2 teaspoon salt;\n" <<
            "2 tablespoons sugar;\n" <<
            "1 egg, slightly beaten;\n" <<
            "1 cup milk;\n" <<
            "1 / 4 cup melted butter.\n";
        cout << endl;
        cout << "Preheat the oven to 375°F. Butter muffin pans. Mix the flour, baking powder, salt, and sugar in a large bowl.\n" <<
            "Add the egg, milk, and butter, stirring only enough to dampen the flour; the batter should not be smooth.\n" <<
            "Spoon into the muffin pans, filling each cup about two-thirds full. Bake for about 20 to 25 minutes each.\n";
    }
    void doughnutRecipe() {
        cout << "500g strong white bread flour;\n" <<
            "60g golden caster sugar; \n" <<
            "15g fresh yeast, crumbled; \n" <<
            "4 eggs; \n" <<
            "zest 1 / 2 lemon; \n" <<
            "2 tsp fine sea salt; \n" <<
            "125g softened unsalted butter; \n" <<
            "about 2 litres sunflower oil, for deep - frying; \n" <<
            "caster sugar, for tossing; \n";
        cout << endl << endl;
        cout << "Put 150g water and all the dough ingredients, apart from the butter, into the bowl of a mixer with a beater paddle.\n" <<
            "Mix on a medium speed for 8 mins or until the dough starts coming away from the sides and forms a ball.\n";
        cout << "Start the mixer up again on a medium speed and slowly add the butter to the dough – about 25g at a time.\n";
        cout << "Knock back the dough in the bowl briefly, then re-cover and put in the fridge to chill overnight.\n";
        cout << "The next day, take the dough out of the fridge and cut it into 50g pieces (you should get about 20).\n";
        cout << "Roll the dough pieces into smooth.\n";
        cout << "Leave for 4 hrs or until doubled in size.\n" << "Fill your deep-fat fryer or heavy-based saucepan halfway with oil. Heat the oil to 180C.\n";
        cout << "When the oil is heated, slide the doughnuts from the tray using a floured pastry scraper.\n";
        cout << "Fry for 2 mins each side until golden brown – they puff up and float,\n" <<
            "so you may need to gently push them down after about 1 min to help them colour evenly.";
        cout << endl;
        cout << "To fill the doughnuts, fill a piping bag with your filling and pipe into the doughnut until nicely swollen 20-50g is the optimum quantity.\n";
    }
    void croissantRecipe() {
        cout << "500g strong white flour, plus extra for dusting;\n" <<
            "1 tsp salt; \n" <<
            "50g sugar; \n" <<
            "2 x 7g sachets fast - action dried yeast; \n" <<
            "oil, for greasing; \n" <<
            "300g butter, at room temperature; \n" <<
            "1 egg, beaten.\n";
        cout << endl;
        cout << "Put the flour, salt and sugar in a mixing bowl. Measure 300ml cold water into a jug, add the yeast and stir, add liquid.\n" <<
            "Shape into a ball, put in a lightly oiled bowl, cover and chill for at least 2 hrs.";
        cout << "Transfer the chilled dough to a floured surface and roll into a 40 x 20cm rectangle.\n";
        cout << "Fold two sides of the dough up and halfway over the butter.\n";
        cout << "Fold the dough in half so that the point where the ends of the dough meet becomes the seam.\n" << "Wrap in cling film and chill for 30 mins.";
        cout << "Repeat the rolling, folding and chilling process (steps 3-6) twice. It’s still folded – without adding more butter. Wrap and chill overnight.\n";
        cout << "Cut the dough in half lengthways. Take each triangle in turn and pull the two corners at the base to stretch and widen it.\n";
        cout << "Continue rolling, making sure the tip of each triangle ends up tucked under the croissant to hold in place.\n";
        cout << "Bend the ends of the croissants inwards, then transfer to baking trays lined with baking parchment, spaced well apart.\n";
    }
    void breadRecipe() {
        cout << "500g strong white flour, plus extra for dusting;\n" <<
            "2 tsp salt;\n" <<
            "7g sachet fast - action yeast;\n" <<
            "3 tbsp olive oil;\n" <<
            "300ml water. \n";
        cout << endl;
        cout << "Mix 500g strong white flour, 2 tsp salt and a 7g sachet of fast-action yeast in a large bowl.\n";
        cout << "Make a well in the centre, then add 3 tbsp olive oil and 300ml water, and mix well.\n" <<"If the dough seems a little stiff, add another 1-2 tbsp water and mix well.\n";;
        cout << "Once the dough is satin-smooth, place it in a lightly oiled bowl and cover with cling film.\n" << "Leave to rise for 1 hour until doubled in size or place in the fridge overnight.\n";
        cout << "Line a baking tray with baking parchment.\n" <<"Knock back the dough (punch the air out and pull the dough in on itself) then gently mould the dough into a ball.\n";
        cout << "Place it on the baking parchment to prove for a further hour until doubled in size.\n";
        cout << "Heat oven to 220C/fan 200C/gas 7.\n";
        cout << "Dust the loaf with some extra flour and cut a cross about 6cm long into the top of the loaf with a sharp knife.\n";
        cout << "Bake for 25-30 mins until golden brown and the loaf sounds hollow when tapped underneath. Cool on a wire rack.";;
    }
    void tiramisuRecipe() {
        cout << "INGREDIENTS\n" <<
            "FOR THE CREAM :\n" <<
            "4 large egg yolks\n" <<
            "1/2 cup / 100 grams granulated sugar, divided\n" <<
            "3/4 cup heavy cream\n" <<
            "1 cup / 227 grams mascarpone(8 ounces)\n" <<
            "FOR THE ASSEMBLY : \n" <<
            "1 ¾ cups good espresso or very strong coffee\n" <<
            "2 tablespoons rum or cognac\n" <<
            "2 tablespoons unsweetened cocoa powder\n" <<
            "About 24 ladyfingers(from one 7 - ounce / 200 - gram package)\n" <<
            "1 to 2 ounces bittersweet chocolate, for shaving(optional)\n";
        cout << endl;
        cout << "Whip together egg yolks and 1/4 cup/50 grams sugar until very pale yellow and about tripled in volume.\n";
        cout << "In the medium bowl, whip cream and remaining 1/4 cup/50 grams sugar until it creates soft-medium peaks.\n" << "Add mascarpone and continue to whip until it creates a soft, spreadable mixture with medium peaks.\n";
        cout << "Combine espresso, using a sifter, dust the bottom of a 2-quart baking dish\n";
        cout << "Spread half the mascarpone mixture onto the ladyfingers in one even layer.\n";
        cout << "Dust top layer with remaining tablespoon of cocoa powder. Top with shaved or finely grated chocolate, if desired.\n";
        cout << "Cover with plastic wrap and let chill in the refrigerator for at least 4 hours\n";
    }
    void CherryStrudelRecipe() {
        cout << "For the Strudel dough\n" <<
            "3 cups of unbleached all - purpose flour + about 1 / 4 to 1 / 2 cup for dustingand rolling;\n" <<
            "1 extra - large egg, room temperature;\n" <<
            "3 tablespoons any neutral oil(I used Sunflower seed oil), divided;\n" <<
            "1 / 2 cup or a little more(if needed) lukewarm water;\n" <<
            "1 tablespoon white vinegar;\n" <<
            "1 / 2 cup(1 stick) unsalted butter or more(if needed), melted;\n" <<
            "Confectioners' sugar for dusting;\n";
        cout << endl;
        cout << "For the Sour Cherry filling\n" <<
            "4 heaping cups sour or sweet cherries(pitted); \n" <<
            "Zest of one lemon;\n" <<
            "1 / 2 cup of confectioners' sugar +1/2 teaspoon cinnamon + 1/2 cup ground walnuts, mixed together in a small bowl.\n";
        cout << endl;
        cout << "Combine the egg, 1 tablespoon of oil, water and vinegar. Add the flour and mix until soft dough forms.\n";
        cout << "Divide the dough into three equal parts. Cover with plastic wrap and let rest for 30 minutes to one hour.\n";
        cout << "Preheat the oven to 375 degrees Fahrenheit. Line a large cookie sheet with parchment paper. Melt the butter.\n";
        cout << "Place one ball of the dough and roll it into a rectangle 1/8-inch thick.\n" << "then cut away the thicker dough around the edges with scissors.\n";
        cout << "Tuck in ends of the strudel and place on the cookie sheet seam-side down.\n";
        cout << "Serve as is or with a dollop of whipped cream or scoop of ice cream.";
    }

    void eclairsRecipe() {
        cout << "1/2 cup butter;\n" <<
            "1 cup water; \n" <<
            "1 cup all - purpose flour; \n" <<
            "1/4 teaspoon salt; \n" <<
            "4 eggs; \n" <<
            "1 (5 ounce) package instant vanilla pudding mix; \n" <<
            "2, 1/2 cups cold milk; \n" <<
            "1 cup heavy cream; \n" <<
            "1/4 cup confectioners' sugar; \n" <<
            "1 teaspoon vanilla extract; \n" <<
            "2 (1 ounce) squares semisweet chocolate; \n" <<
            "2 tablespoons butter; \n" <<
            "1 cup confectioners' sugar; \n" <<
            "1 teaspoon vanilla extract; \n" <<
            "3 tablespoons hot water; \n";
        cout << endl;
        cout << "Preheat oven to 450 degrees F (230 degrees C). Grease a cookie sheet.\n" << "Bring to a boil 1 / 2 cup butter and 1 cup water, stirring until butter melts completely.\n" <<
            "Remove from heat.Add eggs, beating well to incorporate completely after each addition.\n";
        cout << "Bake 15 minutes in the preheated oven, then reduce heat to 325 degrees F (165 degrees C) and bake 20 minutes more,\n" << "until hollow sounding when lightly tapped on the bottom.\n";
        cout << "For the filling, combine pudding mix and milk, sugar and 1 teaspoon vanilla, cream in medium bowl according to package directions.\n";
        cout << "For the icing, melt the chocolate and 2 tablespoons butter in a medium saucepan over low heat. Stir in 1 cup confectioners', sugar and 1 teaspoon vanilla\n" << "Refrigerate until serving.";
    }
    void pizzaRecipe() {
        cout << "1 standard packet of yeast (2 and 1/4 teaspoons);\n" <<
           "Water 1 and 1 / 3 cups 100 - 110°F; \n" <<
            "Flour; \n" <<
            "Oil : A couple table spoons; \n" <<
            "Salt adds necessary flavor; \n" <<
            "1 Tablespoon of sugar; \n" <<
            "Cornmeal. \n";
        cout << endl;
        cout << "Mix the dough ingredients together by hand or use a hand-held or stand mixer.\n" <<
            "Do this in steps as described in the written recipe below.\n";
        cout << "Knead by hand or beat the dough with your mixer.\n";
        cout << "Place dough into a greased mixing bowl, cover tightly, and set aside to rise for about 90 minutes or overnight in the refrigerator.\n";
        cout << "Roll dough out into a 12-inch circle. Cover and rest as you prep the pizza toppings./n";
        cout << "Top with favorite pizza toppings.\n";
        cout << "Bake pizza at a very high temperature for only about 15 minutes.\n";
    }
    void borshchRecipe() {
        cout << "300-400 g beef;\n" <<
            "1.5 kg cabbage; \n" <<
            "3 - 4 potatoes; \n" <<
            "1 - 2 carrots; \n" <<
            "1 onion; \n" <<
            "1 beetroot; \n" <<
            "2 bay leaves; \n" <<
            "1.5 - 2 l water; \n" <<
            "100 ml sour cream; \n" <<
            "salt and pepper to taste; \n";
        cout << endl;
        cout << "First, prepare the broth. Wash the meat, put it in a pot and pour in cold water.\n" <<
            "When the beef boils, remove the foam and cook the broth for another 20 minutes.\n";
        cout << "Peel beetroot, grate on a large grater and fry in oil. Add a little meat broth and stew on a low heat.\n";
        cout << "Finely chop onions and fry in oil until golden color. Add the carrots, pour some more broth and stew for another 3-5 minutes.\n";
        cout << "Peel the potatoes, cut into cubes, add to the broth and wait until it boils.\n";
        cout << "Put the shredded cabbage in the broth and cook for 15 minutes more. Add salt, pepper, stewed beets, herbs and bay leaf.\n";
        cout << "Cover the pan with a lid and cook for another 3-5 minutes. Remove from the heat and let it steep.\n";
    }
    void brulecremeRecipe() {
        cout << "1 quart heavy cream;\n" <<
            "1 vanilla bean, splitand scraped; \n" <<
            "1 cup vanilla sugar, divided; \n" <<
            "6 large egg yolks; \n" <<
            "2 quarts hot water. \n";
        cout << endl;
        cout << "Preheat the oven to 325 degrees F.";
        cout << "Place the cream, vanilla bean and its pulp into a medium saucepan set over medium-high heat and bring to a boil.\n" << "Remove from the heat, cover and allow to sit for 15 minutes. Remove the vanilla bean and reserve for another use. ";
        cout << "In a medium bowl, whisk together 1/2 cup sugar and the egg yolks.\n" << "Add the cream a little at a time. Pour the liquid into 6 (7 to 8-ounce) ramekins.\n";
        cout << "Remove the ramekins from the roasting pan and refrigerate for at least 2 hours and up to 3 days.\n" <<"Remove the creme brulee from the refrigerator for at least 30 minutes prior to browning the sugar on top.\n" << "Allow the creme brulee to sit for at least 5 minutes before serving.";
        cout << endl;
    }
    void biscuitsRecipe() {
        cout << "250g butter, softened;\n" <<
            "140g caster sugar; \n" <<
            "1 egg yolk; \n" <<
            "2 tsp vanilla extract; \n" <<
            "300g plain flour.\n";
        cout << endl;
        cout << "Mix the butter and sugar in a large bowl with a wooden spoon, then add the egg yolk and vanilla extract and briefly beat to combine.";
        cout << "Sift over the flour and stir until the mixture is well combined – you might need to get\n" <<
            "your hands in at the end to give everything a really good mix and press the dough together.";
        cout << endl;
    }
    void chocolateRecipe() {
        cout << "1/2 cup coconut oil; \n" <<
            "1/2 cup cocoa powder; \n" <<
            "3 tablespoons honey; \n" <<
            "1/2 teaspoon vanilla extract.\n";
        cout << endl;
        cout << "Gently melt coconut oil in a saucepan over medium-low heat. Stir cocoa powder, honey, and vanilla extract into melted oil until well blended.\n" <<
            "Pour mixture into a candy mold or pliable tray. Refrigerate until chilled, about 1 hour.";
        cout << endl;
    }
    void lemonJuiceRecipe(){
        cout << "1 cup sugar (can reduce to 3/4 cup); \n" <<
            "1 cup water(for the simple syrup); \n" <<
            "1 cup lemon juice; \n" <<
            "2 to 3 cups cold water(to dilute). \n";
        cout << endl;
        cout << "Place the sugar and water in a small saucepan and bring to a simmer.\n" << "Stir so that the sugar dissolves completely and remove from heat.";
        cout << "Depending on the size of the lemons, 4 to 6 of them should be enough for one cup of juice, so just juice them.";
        cout << "Pour the juice and the simple syrup sugar water into a serving pitcher. Add 2 to 3 cups of cold water and taste. \n" << "Refrigerate 30 to 40 minutes.\n";
    }
    void jamRecipe() {;
        cout << "2 pounds fresh strawberries, hulled; \n" <<
            "4 cups white sugar; \n" <<
            "1/4 cup lemon juice. \n";
        cout << "Crush strawberries in batches until you have 4 cups of mashed berry.\n" << "Mix together the strawberries, sugar, and lemon juice. Stir over low heat until the sugar is dissolved.\n" <<
            "Boil, stirring often, until the mixture reaches (105 degrees C)\n. Transfer to hot sterile jars, leaving 1/4 to 1/2 inch headspace, and seal.\n" <<
            "Process in a water bath.\n";
    }

    void beginning()
    {
        cout << "Welcome to the test game!!!!" << endl;
        cout << endl;
    }

    string text1()
    {
        return "Wrong answer\n";
    }
    string text2()
    {
        return "You're right\n";
    }

    void questions() {
        int score = 0;
        cout << "How does adding salt to boiling water affect it ?\n" << "A.Speeds up the process of boiling water.\n" << "B.It delays the process of water boiling. \n" << "C.Softens the water.\n";
        char letter;
        cin >> letter;
        switch (letter)
        {
        case 'A':
            cout << text1();
            break;
        case 'B':
            cout << text2();
            break;
        case 'b':
            cout << text2();
            break;
        case 'C':
            cout << text1();
            break;
        default:
            cout << "Error\n";
        }
        if (letter != 'B'|| letter != 'b')
            cout << "The right answer is B.\n";
        cout << endl;
        cout << "Which of these cutting boards is the most sanitary?\n" << "A.Wood\n" << "B.Bamboo\n" << "C.Plastic\n";
        cin >> letter;
        switch (letter)
        {
        case 'A':
            cout << text1();
            break;
        case 'B':
            cout << text1();
            break;
        case 'C':
            cout << text2();
            break;
        case 'c':
            cout << text2();
            break;
        default:
            cout << "Error\n";
        }
        if (letter != 'C'|| letter != 'c')
            cout << "The right answer is C.\n";
        cout << endl;
        cout << "The sauce you are using has become too watery, what is the best way to thicken it?\n" << "A.Add Flour or Corn - starch.\n" << "B.Put it in the freezer.\n" << "C.Add Sauce.\n";
        cin >> letter;
        switch (letter)
        {
        case 'A':
            cout << text2();
            break;
        case 'a':
            cout << text2();
            break;
        case 'B':
            cout << text1();
            break;
        case 'C':
            cout << text1();
            break;
        default:
            cout << "Error\n";
        }
        if (letter != 'A'||letter != 'a')
            cout << "The right answer is A.\n";
        cout << endl;
        cout << "Which oil is the healthiest to cook with?\n" << "A.Coconut\n" << "B.Olive\n" << "C.Mushroom\n";
        cin >> letter;
        switch (letter)
        {
        case 'A':
            cout << text1();
            break;
        case 'B':
            cout << text2();
            break;
        case 'b':
            cout << text2();
            break;
        case 'C':
            cout << text1();
            break;
        default:
            cout << "Error\n";
        }
        if (letter != 'B'|| letter != 'b')
            cout << "The right answer is B.\n";
        cout << endl;
        cout << "How can you determine if an egg is fresh?\n" << "A.If it sinks to the bottom in a bowl of water and lays flat on its side.\n" << "B.If it floats to the surface in a bowl full of water.\n" << "C.Shake it to see if it rattles.\n";
        cin >> letter;
        switch (letter)
        {
        case 'A':
            cout << text2();
            break;
        case 'a':
            cout << text2();
            break;
        case 'B':
            cout << text1();
            break;
        case 'C':
            cout << text1();
            break;
        default:
            cout << "Error\n";
        }
        if (letter != 'A'|| letter != 'a')
            cout << "The right answer is A.\n";
        cout << endl;
        cout << endl;
        cout << "When chocolate has been tempered, what does it mean?\n" << "A.It has been frozen solidand is not safe to eat.\n" << "B.It has been gift wrapped.\n" <<
            "C.It is the process of re - establishing the cocoa butters crystals, resulting in much better - quality chocolate that is shiny and ‘snapable’.\n";
        cin >> letter;
        switch (letter)
        {
        case 'A':
            cout << text1();
            break;
        case 'B':
            cout << text1();
            break;
        case 'C':
            cout << text2();
            break;
        case 'c':
            cout << text2();
            break;
        default:
            cout << "Error\n";
        }
        if (letter != 'C' || letter != 'c')
            cout << "The right answer is C.\n";
        cout << endl;
        cout << "For best results when smoking foods on an outdoor grill, what types of wood should you NOT use?\n" << "A.Hardwoods\n" << "B.Okawood\n" << "Softwoods\n";
        cin >> letter;
        switch (letter)
        {
        case 'A':
            cout << text1();
            break;
        case 'B':
            cout << text1();
            break;
        case 'C':
            cout << text2();
            break;
        case 'c':
            cout << text2();
            break;
        default:
            cout << "Error\n";
        }
        if (letter != 'C' || letter != 'c')
            cout << "The right answer is C.\n";
        cout << endl;
        cout << "How can you fix a dish that has been over - sweetened?\n" << "A.Add honey and tomatoes.\n" << "B.Add a squeeze of lemon or lime juice or a spoon of apple cider vinegar.\n" << "C.Add more water.\n";
        cin >> letter;
        switch (letter)
        {
        case 'A':
            cout << text1();
            break;
        case 'B':
            cout << text2();
            break;
        case 'b':
            cout << text2();
            break;;
        case 'C':
            cout << text1();
            break;
        default:
            cout << "Error\n";
        }
        if (letter != 'B' || letter != 'b')
            cout << "The right answer is B.\n";
    }
int main() {
    message();
    srand(time(0));
    string sub[15] = { "Marmalade", "Muffin", "Doughnut", "Croissant", "Bread", "Tiramisu", 
        "Cherry_strudel", "Eclairs", "Pizza",
        "Borshch", "Creme_brulee", "Biscuits", "Chocolate", "Lemon_juice", "Jam"};

    Category cat = Category();
    for (int i = 0; i < 15; i++) {
        Product* tmpProduct = new Product(sub[i]);
        cat.addProduct(tmpProduct);
    }
    cat.showProducts();

    string choice;
    cout << "Type: \n";
    cin >> choice;
    cout << endl << endl;
    cout << "Here's the recipe for the " << choice << endl << endl;

    if (choice == "Marmalade")
        marmaladeRecipe();
    if (choice == "Muffin")
        muffinRecipe();
    if (choice == "Doughnut")
        doughnutRecipe();
    if (choice == "Croissant")
        croissantRecipe();
    if (choice == "Bread")
        breadRecipe();
    if (choice == "Tiramisu")
        tiramisuRecipe();
    if (choice == "Cherry_strudel")
        CherryStrudelRecipe();
    if (choice == "Eclairs")
        eclairsRecipe();
    if (choice == "Pizza")
        pizzaRecipe();
    if (choice == "Borshch")
        borshchRecipe();
    if (choice == "Creme_brulee")
        brulecremeRecipe();
    if (choice == "Biscuits")
        biscuitsRecipe();
    if (choice == "Chocolate")
        chocolateRecipe();
    if (choice == "Lemon_juice")
        lemonJuiceRecipe();
    if (choice == "Jam")
        jamRecipe();
    cout << endl << endl;
    int as;
    cout << "Do you want to test yourself as a cook? (1/2)\n";
    cin >> as;
    switch (as) {
    case 1: beginning();
        cout << endl;
        questions();
        break;
    case 2:
        cout << "Here's some good books using which you can become a real cook: \n" << " -> Alt, Fat, Acid, Heat by Samin Nosrat;\n" << " -> The Joy of Cooking by Irma S.Rombauer, Marion Rombauer Becker, Ethan Becker, John Becker, Megan Scott;\n" <<
            " -> The Food Lab: Better Home Cooking Through Science by J.Kenji López - Alt;\n" << " -> Small Victories by Julia Turshen;\n" << " -> The New Vegetarian Cooking for Everyone by Deborah Madison\n" << " -> How to Cook Everything by Mark Bittman\n" << " -> Baking Illustrated by the Editors of Cook’s Illustrated;\n"
            << " -> Simple Cake by Odette Williams.\n";
        break;
    default:
        cout << "Wrong syntaxys" << endl;
    }
    cout << endl << endl;
    cout << "                                   Thanks for testing the program!!!                                 " << endl;

	return 0;
}
