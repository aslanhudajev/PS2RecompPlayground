#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WorldRestoreInitState
// Address: 0x21ca60 - 0x21cb8c
void WorldRestoreInitState_0x21ca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21ca60u;

    // 0x21ca60: 0x3c020032
    ctx->pc = 0x21ca60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21ca64: 0x8c42f9f0
    ctx->pc = 0x21ca64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965744)));
    // 0x21ca68: 0x10400046
    ctx->pc = 0x21CA68u;
    {
        const bool branch_taken_0x21ca68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21CA6Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21ca68) {
            ctx->pc = 0x21CB84u;
            goto label_21cb84;
        }
    }
    ctx->pc = 0x21CA70u;
    // 0x21ca70: 0x8c42f9f4
    ctx->pc = 0x21ca70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965748)));
    // 0x21ca74: 0x10400043
    ctx->pc = 0x21CA74u;
    {
        const bool branch_taken_0x21ca74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21CA78u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21ca74) {
            ctx->pc = 0x21CB84u;
            goto label_21cb84;
        }
    }
    ctx->pc = 0x21CA7Cu;
    // 0x21ca7c: 0x8c42fa58
    ctx->pc = 0x21ca7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965848)));
    // 0x21ca80: 0x1840002b
    ctx->pc = 0x21CA80u;
    {
        const bool branch_taken_0x21ca80 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21CA84u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21ca80) {
            ctx->pc = 0x21CB30u;
            goto label_21cb30;
        }
    }
    ctx->pc = 0x21CA88u;
    // 0x21ca88: 0x3c020032
    ctx->pc = 0x21ca88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21ca8c: 0x2447f9f8
    ctx->pc = 0x21ca8cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x21ca90: 0x240c003c
    ctx->pc = 0x21ca90u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 60));
    // 0x21ca94: 0x3c0bc31f
    ctx->pc = 0x21ca94u;
    SET_GPR_U32(ctx, 11, ((uint32_t)49951 << 16));
    // 0x21ca98: 0x356bffff
    ctx->pc = 0x21ca98u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), 65535));
    // 0x21ca9c: 0x3c0a0032
    ctx->pc = 0x21ca9cu;
    SET_GPR_U32(ctx, 10, ((uint32_t)50 << 16));
    // 0x21caa0: 0x3c090032
    ctx->pc = 0x21caa0u;
    SET_GPR_U32(ctx, 9, ((uint32_t)50 << 16));
    // 0x21caa4: 0x2408000c
    ctx->pc = 0x21caa4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 12));
    // 0x21caa8: 0x8ce30004
    ctx->pc = 0x21caa8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x21caac: 0x0
    ctx->pc = 0x21caacu;
    // NOP
label_21cab0:
    // 0x21cab0: 0xcc2818
    ctx->pc = 0x21cab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21cab4: 0xa31821
    ctx->pc = 0x21cab4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21cab8: 0x8c620010
    ctx->pc = 0x21cab8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x21cabc: 0x4b1024
    ctx->pc = 0x21cabcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x21cac0: 0xac620010
    ctx->pc = 0x21cac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x21cac4: 0x8ce30004
    ctx->pc = 0x21cac4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x21cac8: 0xa31821
    ctx->pc = 0x21cac8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21cacc: 0x8d44f9f0
    ctx->pc = 0x21caccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 10), 4294965744)));
    // 0x21cad0: 0x61080
    ctx->pc = 0x21cad0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x21cad4: 0x441021
    ctx->pc = 0x21cad4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21cad8: 0x8c420000
    ctx->pc = 0x21cad8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21cadc: 0xac620018
    ctx->pc = 0x21cadcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x21cae0: 0x8ce20004
    ctx->pc = 0x21cae0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x21cae4: 0xa21021
    ctx->pc = 0x21cae4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21cae8: 0x8d23f9f4
    ctx->pc = 0x21cae8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 4294965748)));
    // 0x21caec: 0xc82018
    ctx->pc = 0x21caecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21caf0: 0x832021
    ctx->pc = 0x21caf0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21caf4: 0xc4800000
    ctx->pc = 0x21caf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21caf8: 0xe440001c
    ctx->pc = 0x21caf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x21cafc: 0x8ce20004
    ctx->pc = 0x21cafcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x21cb00: 0xa21021
    ctx->pc = 0x21cb00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21cb04: 0xc4800004
    ctx->pc = 0x21cb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cb08: 0xe4400020
    ctx->pc = 0x21cb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x21cb0c: 0x8ce20004
    ctx->pc = 0x21cb0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x21cb10: 0xa22821
    ctx->pc = 0x21cb10u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21cb14: 0xc4800008
    ctx->pc = 0x21cb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cb18: 0xe4a00024
    ctx->pc = 0x21cb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x21cb1c: 0x24c60001
    ctx->pc = 0x21cb1cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x21cb20: 0x8ce20060
    ctx->pc = 0x21cb20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x21cb24: 0xc2102a
    ctx->pc = 0x21cb24u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x21cb28: 0x5440ffe1
    ctx->pc = 0x21CB28u;
    {
        const bool branch_taken_0x21cb28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21cb28) {
            ctx->pc = 0x21CB2Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->pc = 0x21CAB0u;
            goto label_21cab0;
        }
    }
    ctx->pc = 0x21CB30u;
label_21cb30:
    // 0x21cb30: 0x3c020032
    ctx->pc = 0x21cb30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21cb34: 0x8c42fa88
    ctx->pc = 0x21cb34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965896)));
    // 0x21cb38: 0x18400012
    ctx->pc = 0x21CB38u;
    {
        const bool branch_taken_0x21cb38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21CB3Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21cb38) {
            ctx->pc = 0x21CB84u;
            goto label_21cb84;
        }
    }
    ctx->pc = 0x21CB40u;
    // 0x21cb40: 0x3c020032
    ctx->pc = 0x21cb40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21cb44: 0x2444f9f8
    ctx->pc = 0x21cb44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x21cb48: 0x240500a0
    ctx->pc = 0x21cb48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 160));
    // 0x21cb4c: 0x8c830098
    ctx->pc = 0x21cb4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_21cb50:
    // 0x21cb50: 0xc51018
    ctx->pc = 0x21cb50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21cb54: 0x431021
    ctx->pc = 0x21cb54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21cb58: 0x8c420000
    ctx->pc = 0x21cb58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21cb5c: 0x10400004
    ctx->pc = 0x21CB5Cu;
    {
        const bool branch_taken_0x21cb5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21CB60u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x21cb5c) {
            ctx->pc = 0x21CB70u;
            goto label_21cb70;
        }
    }
    ctx->pc = 0x21CB64u;
    // 0x21cb64: 0x8c83008c
    ctx->pc = 0x21cb64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x21cb68: 0x431021
    ctx->pc = 0x21cb68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21cb6c: 0xac400008
    ctx->pc = 0x21cb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_21cb70:
    // 0x21cb70: 0x24c60001
    ctx->pc = 0x21cb70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x21cb74: 0x8c820090
    ctx->pc = 0x21cb74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x21cb78: 0xc2102a
    ctx->pc = 0x21cb78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x21cb7c: 0x5440fff4
    ctx->pc = 0x21CB7Cu;
    {
        const bool branch_taken_0x21cb7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21cb7c) {
            ctx->pc = 0x21CB80u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 152)));
            ctx->pc = 0x21CB50u;
            goto label_21cb50;
        }
    }
    ctx->pc = 0x21CB84u;
label_21cb84:
    // 0x21cb84: 0x3e00008
    ctx->pc = 0x21CB84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21CAB0u: goto label_21cab0;
            case 0x21CB30u: goto label_21cb30;
            case 0x21CB50u: goto label_21cb50;
            case 0x21CB70u: goto label_21cb70;
            case 0x21CB84u: goto label_21cb84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21CB8Cu;
}
