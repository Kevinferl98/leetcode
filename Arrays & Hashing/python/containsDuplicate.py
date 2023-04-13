class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        Hashset = set()

        for i in range(len(nums)):
            if nums[i] in Hashset:
                return True
            else:
                Hashset.add(nums[i])
        return False