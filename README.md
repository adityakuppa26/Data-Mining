# Data Mining  
  
Data mining deals with the fetching of meaningful information (non-trivial, unknown, hidden, and implicit) or knowledge for huge amounts of data, which helps visualize and analyse the data for various commercial and scientific purposes.  
  
This process takes place after the data warehousing process, as it requires compiled or appropriate data to extract useful information.   
  
# Knowledge Discovery in Databases (KDD)
  
  
* <b>Data Cleaning</b>: Data cleaning step eliminates the inconsistencies and aberrations from the data. It standardizes and makes the data useable. Removal of noise or outliers. Collecting necessary information to model or account for noise.  
Strategies for handling missing data fields.  
  
*	<b>Data Integration</b>: This step of KDD is used to integrate or collaborate various databases of different types. The databases from various sources are integrated into a single database i.e. the different formats of data are standardized to a single form.  
  
*	<b>Data Selection and Transformation</b>: Finding useful features to represent the data depending on the goal of the task. Using dimensionality reduction or transformation methods to reduce the effective number of variables under consideration or to find invariant representations for the data.  
  
*	<b>Data Mining</b>: Searching for patterns of interest in a particular representational form or a set of such representations as classification rules or trees, regression, clustering, and so forth. Selecting method(s) to be used for searching for patterns in the data.  
  
*	<b>Pattern Evaluation</b> : The obtained patterns are then evaluated and analysed for interesting information and then stored in the database as given to user in the form of knowledge.  
  
# Star Schema
  
The star schema is perhaps the simplest data warehouse schema. It is called a star schema because the entity-relationship diagram of this schema resembles a star, with points radiating from a central table. The center of the star consists of a large fact table and the points of the star are the dimension tables.  
  
A star schema is characterized by one or more very large fact tables that contain the primary information in the data warehouse, and a number of much smaller dimension tables (or lookup tables), each of which contains information about the entries for a particular attribute in the fact table.  
  
A star query is a join between a fact table and a number of dimension tables. Each dimension table is joined to the fact table using a primary key to foreign key join, but the dimension tables are not joined to each other.  
  
The main advantages of star schemas are:  
  
1.	Provide a direct and intuitive mapping between the business entities being analyzed by end users and the schema design.  

2.	Provide highly optimized performance for typical star queries.  

3.	Are widely supported by a large number of business intelligence tools, which may anticipate or even require that the data-warehouse schema contain dimension tables.  
  
Star schemas are used for both simple data marts and very large data warehouse  
  
![star_schema](star.PNG)
  
# Snowflake Schema
  
The snowflake schema is an extension of the star schema, where each point of the star explodes into more points. In a star schema, each dimension is represented by a single dimensional table, whereas in a snowflake schema, that dimensional table is normalized into multiple lookup tables, each representing a level in the dimensional hierarchy.  
The main advantage of the snowflake schema is the improvement in query performance due to minimized disk storage requirements and joining smaller lookup tables. The main disadvantage of the snowflake schema is the additional maintenance efforts needed due to the increase number of lookup tables.  
  
![snow flake](snowflake.PNG)  
  
# OLAP Cube  
  
An OLAP cube is a term that typically refers to multi-dimensional array of data. OLAP is an acronym for online analytical processing, which is a computer-based technique of analyzing data to look for insights. The term cube here refers to a multi-dimensional dataset, which is also sometimes called a hypercube if the number of dimensions is greater than 3.  
  
Operations:  
  
1.	Slice is the act of picking a rectangular subset of a cube by choosing a single value for one of its dimensions, creating a new cube with one fewer dimension.  
  
2.	Dice: The dice operation produces a subcube by allowing the analyst to pick specific values of multiple dimensions.  
  
3.	Drill Down/Up allows the user to navigate among levels of data ranging from the most summarized (up) to the most detailed (down).  
  
4. Roll-up: A roll-up involves summarizing the data along a dimension. The summarization rule might be computing totals along a hierarchy or applying a set of formulas such as profit = sales – expenses.  
  
5. Pivot: allows an analyst to rotate the cube in space to see its various faces.  
  



  
