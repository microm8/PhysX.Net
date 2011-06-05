#pragma once

#include <PxExtended.h>

namespace PhysX
{
	private ref class MathUtil
	{
		internal:
			static Math::Matrix PxTransformToMatrix(physx::pubfnd3::PxTransform* transform);
			static physx::pubfnd3::PxTransform MatrixToPxTransform(Math::Matrix transform);
				
			static Math::Matrix PxMat33ToMatrix(physx::pubfnd3::PxMat33* matrix);
			static physx::pubfnd3::PxMat33 MatrixToPxMat33(Math::Matrix matrix);

			static Math::Vector3 PxVec3ToVector3(physx::pubfnd3::PxVec3 vector);
			static physx::pubfnd3::PxVec3 Vector3ToPxVec3(Math::Vector3 vector);

			static Math::Vector3 PxExtendedVec3ToVector3(PxExtendedVec3 vector);
			static PxExtendedVec3 Vector3ToPxExtendedVec3(Math::Vector3 vector);
				
			static Math::Quaternion PxQuatToQuaternion(physx::pubfnd3::PxQuat quat);
			static physx::pubfnd3::PxQuat QuaternionPxQuat(Math::Quaternion quat);

			static bool IsMultipleOf(int num, int divisor);
	};
};