//
//  MNSTimeTracking.h
//
//  Copyright 2014 MediaNet Software
//  This file is part of MNSJiraRESTClient.
//
//  MNSJiraRESTClient is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published by
//  the Free Software Foundation, either version 3 of the License.
//
//  MNSJiraRESTClient is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public License
//  along with MNSJiraRESTClient.  If not, see <http://www.gnu.org/licenses/>.

@interface MNSTimeTracking : NSObject

@property (assign, nonatomic) NSInteger originalEstimateMinutes;
@property (assign, nonatomic) NSInteger remainingEstimateMinutes;
@property (assign, nonatomic) NSInteger timeSpentMinutes;
@property (copy, nonatomic) NSString *originalEstimate;
@property (copy, nonatomic) NSString *remainingEstimate;
@property (copy, nonatomic) NSString *timeSpent;

- (id)initWithOriginalEstimateMinutes:(NSInteger)originalEstimateMinutes remainingEstimateMinutes:(NSInteger)remainingEstimateMinutes timeSpentMinutes:(NSInteger)timeSpentMinutes;

@end
