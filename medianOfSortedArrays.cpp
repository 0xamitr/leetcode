class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int k = 0;
        int size1 = nums1.size();
        int size2 = nums2.size();
        int size = nums1.size() + nums2.size();
        bool ip = false;
        bool kp = false;
        if(!size1){
            k = (size/2.0)-1;
            if(size%2 == 0){
                return (nums2[k] + nums2[k+1])/2.0;
            }
            else{
                k = size/2;
                return (nums2[k]);
            }
        }
        if(!size2){
            i = (size/2.0)-1;
            if(size%2 == 0){
                return (nums1[i] + nums1[i+1])/2.0;
            }
            else{
                i = size/2;
                return (nums1[i]);
            }
        }
        while(true){
            if(i+k >= (size/2.0)-1){
                if(i >= k){
                    if(i > size1-1){
                        kp = true;
                        break;
                    }
                    if(k > size2-1){
                        ip = true;
                        break;
                    }
                    if(nums1[i] > nums2[k]){
                        kp = true;
                    }
                    else{
                        ip = true;
                    }
                    break;
                }
                if(k >= i){
                    if(i > size1-1){
                        kp = true; 
                        break;
                    }
                    if(k > size2-1){
                        ip = true;
                        break;
                    }
                    if(nums1[i] > nums2[k]){
                        kp = true;
                    }
                    else{
                        ip = true;
                    }
                    break;
                }
            }
            if(i >=size1){
                k++;
                continue;
            }
            if(k >=size2){
                i++;
                continue;
            }
            if(nums1[i] <= nums2[k]){
                i++;
            }
            else if(nums1[i] > nums2[k]){
                k++;
            }
        }
        if(size%2 == 0){
            if(ip){
                if(k > size2-1){
                    return (nums1[i] + nums1[i+1])/2.0;
                }
                if(i == size1-1){
                    return (nums1[i] + nums2[k])/2.0;
                }
                if(nums1[i+1] <= nums2[k]){
                    return (nums1[i] + nums1[i+1])/2.0;
                }
                return (nums1[i] + nums2[k])/2.0;
            }
            else if(kp){
                if(i > size1-1){
                    return (nums2[k] + nums2[k+1])/2.0;
                }
                if(k == size2-1){
                    return (nums2[k] + nums1[i])/2.0;
                }
                if(nums2[k+1] <= nums1[i]){
                    return (nums2[k] + nums2[k+1])/2.0;
                }
                return (nums2[k] + nums1[i])/2.0;
            }
        }
        else{
            if(ip){
                return nums1[i]+0.0;
            }
            else if(kp){
                return nums2[k]+0.0;
            }
        }
        return 4;
    }
};