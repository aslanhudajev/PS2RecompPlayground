#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSetupTexture
// Address: 0x2ae6d8 - 0x2ae7e0
void pbSetupTexture_0x2ae6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ae6d8u;

    // 0x2ae6d8: 0x3c020036
    ctx->pc = 0x2ae6d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ae6dc: 0x8c42dee0
    ctx->pc = 0x2ae6dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ae6e0: 0x42100
    ctx->pc = 0x2ae6e0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2ae6e4: 0x24840004
    ctx->pc = 0x2ae6e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x2ae6e8: 0x8c420038
    ctx->pc = 0x2ae6e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2ae6ec: 0x822021
    ctx->pc = 0x2ae6ecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ae6f0: 0x8c82000c
    ctx->pc = 0x2ae6f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ae6f4: 0x2c420008
    ctx->pc = 0x2ae6f4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 8));
    // 0x2ae6f8: 0x10400037
    ctx->pc = 0x2AE6F8u;
    {
        const bool branch_taken_0x2ae6f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AE6FCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x2ae6f8) {
            ctx->pc = 0x2AE7D8u;
            goto label_2ae7d8;
        }
    }
    ctx->pc = 0x2AE700u;
    // 0x2ae700: 0x8cc40070
    ctx->pc = 0x2ae700u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x2ae704: 0x8cc20048
    ctx->pc = 0x2ae704u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x2ae708: 0x10400022
    ctx->pc = 0x2AE708u;
    {
        const bool branch_taken_0x2ae708 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AE70Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ae708) {
            ctx->pc = 0x2AE794u;
            goto label_2ae794;
        }
    }
    ctx->pc = 0x2AE710u;
    // 0x2ae710: 0x51180
    ctx->pc = 0x2ae710u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 6));
    // 0x2ae714: 0x0
    ctx->pc = 0x2ae714u;
    // NOP
label_2ae718:
    // 0x2ae718: 0x8cc30058
    ctx->pc = 0x2ae718u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x2ae71c: 0x431821
    ctx->pc = 0x2ae71cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae720: 0xac60001c
    ctx->pc = 0x2ae720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x2ae724: 0x94620016
    ctx->pc = 0x2ae724u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x2ae728: 0x50400010
    ctx->pc = 0x2AE728u;
    {
        const bool branch_taken_0x2ae728 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ae728) {
            ctx->pc = 0x2AE72Cu;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->pc = 0x2AE76Cu;
            goto label_2ae76c;
        }
    }
    ctx->pc = 0x2AE730u;
    // 0x2ae730: 0x94620018
    ctx->pc = 0x2ae730u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2ae734: 0x5040000d
    ctx->pc = 0x2AE734u;
    {
        const bool branch_taken_0x2ae734 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ae734) {
            ctx->pc = 0x2AE738u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->pc = 0x2AE76Cu;
            goto label_2ae76c;
        }
    }
    ctx->pc = 0x2AE73Cu;
    // 0x2ae73c: 0x90620003
    ctx->pc = 0x2ae73cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x2ae740: 0x10400009
    ctx->pc = 0x2AE740u;
    {
        const bool branch_taken_0x2ae740 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AE744u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 33));
        if (branch_taken_0x2ae740) {
            ctx->pc = 0x2AE768u;
            goto label_2ae768;
        }
    }
    ctx->pc = 0x2AE748u;
    // 0x2ae748: 0x50400008
    ctx->pc = 0x2AE748u;
    {
        const bool branch_taken_0x2ae748 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ae748) {
            ctx->pc = 0x2AE74Cu;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->pc = 0x2AE76Cu;
            goto label_2ae76c;
        }
    }
    ctx->pc = 0x2AE750u;
    // 0x2ae750: 0x94620004
    ctx->pc = 0x2ae750u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ae754: 0x50400005
    ctx->pc = 0x2AE754u;
    {
        const bool branch_taken_0x2ae754 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ae754) {
            ctx->pc = 0x2AE758u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->pc = 0x2AE76Cu;
            goto label_2ae76c;
        }
    }
    ctx->pc = 0x2AE75Cu;
    // 0x2ae75c: 0x94620006
    ctx->pc = 0x2ae75cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2ae760: 0x54400005
    ctx->pc = 0x2AE760u;
    {
        const bool branch_taken_0x2ae760 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ae760) {
            ctx->pc = 0x2AE764u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->pc = 0x2AE778u;
            goto label_2ae778;
        }
    }
    ctx->pc = 0x2AE768u;
label_2ae768:
    // 0x2ae768: 0x94620008
    ctx->pc = 0x2ae768u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2ae76c:
    // 0x2ae76c: 0x34420100
    ctx->pc = 0x2ae76cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 256));
    // 0x2ae770: 0x10000003
    ctx->pc = 0x2AE770u;
    {
        const bool branch_taken_0x2ae770 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AE774u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2ae770) {
            ctx->pc = 0x2AE780u;
            goto label_2ae780;
        }
    }
    ctx->pc = 0x2AE778u;
label_2ae778:
    // 0x2ae778: 0x821021
    ctx->pc = 0x2ae778u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ae77c: 0xac62000c
    ctx->pc = 0x2ae77cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_2ae780:
    // 0x2ae780: 0x24a50001
    ctx->pc = 0x2ae780u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ae784: 0x8cc20048
    ctx->pc = 0x2ae784u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x2ae788: 0xa2102b
    ctx->pc = 0x2ae788u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ae78c: 0x1440ffe2
    ctx->pc = 0x2AE78Cu;
    {
        const bool branch_taken_0x2ae78c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AE790u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 6));
        if (branch_taken_0x2ae78c) {
            ctx->pc = 0x2AE718u;
            goto label_2ae718;
        }
    }
    ctx->pc = 0x2AE794u;
label_2ae794:
    // 0x2ae794: 0x8cc20050
    ctx->pc = 0x2ae794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2ae798: 0x1040000f
    ctx->pc = 0x2AE798u;
    {
        const bool branch_taken_0x2ae798 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AE79Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ae798) {
            ctx->pc = 0x2AE7D8u;
            goto label_2ae7d8;
        }
    }
    ctx->pc = 0x2AE7A0u;
    // 0x2ae7a0: 0x24070024
    ctx->pc = 0x2ae7a0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 36));
    // 0x2ae7a4: 0x8cc20060
    ctx->pc = 0x2ae7a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 96)));
label_2ae7a8:
    // 0x2ae7a8: 0xa71818
    ctx->pc = 0x2ae7a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ae7ac: 0x621821
    ctx->pc = 0x2ae7acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ae7b0: 0x8462001e
    ctx->pc = 0x2ae7b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x2ae7b4: 0x8cc40058
    ctx->pc = 0x2ae7b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x2ae7b8: 0x21180
    ctx->pc = 0x2ae7b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ae7bc: 0x441021
    ctx->pc = 0x2ae7bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ae7c0: 0xac43001c
    ctx->pc = 0x2ae7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x2ae7c4: 0x24a50001
    ctx->pc = 0x2ae7c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ae7c8: 0x8cc20050
    ctx->pc = 0x2ae7c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2ae7cc: 0xa2102b
    ctx->pc = 0x2ae7ccu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ae7d0: 0x5440fff5
    ctx->pc = 0x2AE7D0u;
    {
        const bool branch_taken_0x2ae7d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ae7d0) {
            ctx->pc = 0x2AE7D4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 96)));
            ctx->pc = 0x2AE7A8u;
            goto label_2ae7a8;
        }
    }
    ctx->pc = 0x2AE7D8u;
label_2ae7d8:
    // 0x2ae7d8: 0x3e00008
    ctx->pc = 0x2AE7D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AE718u: goto label_2ae718;
            case 0x2AE768u: goto label_2ae768;
            case 0x2AE76Cu: goto label_2ae76c;
            case 0x2AE778u: goto label_2ae778;
            case 0x2AE780u: goto label_2ae780;
            case 0x2AE794u: goto label_2ae794;
            case 0x2AE7A8u: goto label_2ae7a8;
            case 0x2AE7D8u: goto label_2ae7d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AE7E0u;
}
