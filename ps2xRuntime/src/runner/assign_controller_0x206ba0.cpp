#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: assign_controller
// Address: 0x206ba0 - 0x206d14
void assign_controller_0x206ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x206ba0u;

    // 0x206ba0: 0x3c020031
    ctx->pc = 0x206ba0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x206ba4: 0x8c420e4c
    ctx->pc = 0x206ba4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 3660)));
    // 0x206ba8: 0x10400003
    ctx->pc = 0x206BA8u;
    {
        const bool branch_taken_0x206ba8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x206BACu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x206ba8) {
            ctx->pc = 0x206BB8u;
            goto label_206bb8;
        }
    }
    ctx->pc = 0x206BB0u;
    // 0x206bb0: 0x3e00008
    ctx->pc = 0x206BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206BB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206BB8u: goto label_206bb8;
            case 0x206C30u: goto label_206c30;
            case 0x206C64u: goto label_206c64;
            case 0x206C68u: goto label_206c68;
            case 0x206C6Cu: goto label_206c6c;
            case 0x206CD4u: goto label_206cd4;
            case 0x206CE8u: goto label_206ce8;
            case 0x206D0Cu: goto label_206d0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206BB8u;
label_206bb8:
    // 0x206bb8: 0x3c030031
    ctx->pc = 0x206bb8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x206bbc: 0x24630ea0
    ctx->pc = 0x206bbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3744));
    // 0x206bc0: 0x61080
    ctx->pc = 0x206bc0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x206bc4: 0x431021
    ctx->pc = 0x206bc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206bc8: 0x8c420000
    ctx->pc = 0x206bc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206bcc: 0x441004f
    ctx->pc = 0x206BCCu;
    {
        const bool branch_taken_0x206bcc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x206BD0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x206bcc) {
            ctx->pc = 0x206D0Cu;
            goto label_206d0c;
        }
    }
    ctx->pc = 0x206BD4u;
    // 0x206bd4: 0x3c020031
    ctx->pc = 0x206bd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x206bd8: 0x24441c80
    ctx->pc = 0x206bd8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 7296));
    // 0x206bdc: 0x8c421c80
    ctx->pc = 0x206bdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7296)));
    // 0x206be0: 0x50430021
    ctx->pc = 0x206BE0u;
    {
        const bool branch_taken_0x206be0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x206be0) {
            ctx->pc = 0x206BE4u;
            SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
            ctx->pc = 0x206C68u;
            goto label_206c68;
        }
    }
    ctx->pc = 0x206BE8u;
    // 0x206be8: 0x8c820004
    ctx->pc = 0x206be8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x206bec: 0x1043001d
    ctx->pc = 0x206BECu;
    {
        const bool branch_taken_0x206bec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x206BF0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 3));
        if (branch_taken_0x206bec) {
            ctx->pc = 0x206C64u;
            goto label_206c64;
        }
    }
    ctx->pc = 0x206BF4u;
    // 0x206bf4: 0x1440001c
    ctx->pc = 0x206BF4u;
    {
        const bool branch_taken_0x206bf4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x206BF8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
        if (branch_taken_0x206bf4) {
            ctx->pc = 0x206C68u;
            goto label_206c68;
        }
    }
    ctx->pc = 0x206BFCu;
    // 0x206bfc: 0x24c30003
    ctx->pc = 0x206bfcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 3));
    // 0x206c00: 0x2402ffff
    ctx->pc = 0x206c00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x206c04: 0x46102a
    ctx->pc = 0x206c04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 6)));
    // 0x206c08: 0xc2180b
    ctx->pc = 0x206c08u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 6));
    // 0x206c0c: 0x32883
    ctx->pc = 0x206c0cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 2));
    // 0x206c10: 0x3c020031
    ctx->pc = 0x206c10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x206c14: 0x24420e90
    ctx->pc = 0x206c14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3728));
    // 0x206c18: 0x51880
    ctx->pc = 0x206c18u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x206c1c: 0x621821
    ctx->pc = 0x206c1cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206c20: 0x8c620000
    ctx->pc = 0x206c20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x206c24: 0x4410011
    ctx->pc = 0x206C24u;
    {
        const bool branch_taken_0x206c24 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x206C28u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3728));
        if (branch_taken_0x206c24) {
            ctx->pc = 0x206C6Cu;
            goto label_206c6c;
        }
    }
    ctx->pc = 0x206C2Cu;
    // 0x206c2c: 0xac660000
    ctx->pc = 0x206c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_206c30:
    // 0x206c30: 0x3c030031
    ctx->pc = 0x206c30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x206c34: 0x24630ea0
    ctx->pc = 0x206c34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3744));
    // 0x206c38: 0x61080
    ctx->pc = 0x206c38u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x206c3c: 0x431021
    ctx->pc = 0x206c3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206c40: 0xac450000
    ctx->pc = 0x206c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x206c44: 0x3c040032
    ctx->pc = 0x206c44u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x206c48: 0x24020001
    ctx->pc = 0x206c48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x206c4c: 0xa21004
    ctx->pc = 0x206c4cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x206c50: 0x8c8307b4
    ctx->pc = 0x206c50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 1972)));
    // 0x206c54: 0x431025
    ctx->pc = 0x206c54u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206c58: 0xac8207b4
    ctx->pc = 0x206c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1972), GPR_U32(ctx, 2));
    // 0x206c5c: 0x3e00008
    ctx->pc = 0x206C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206C60u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206BB8u: goto label_206bb8;
            case 0x206C30u: goto label_206c30;
            case 0x206C64u: goto label_206c64;
            case 0x206C68u: goto label_206c68;
            case 0x206C6Cu: goto label_206c6c;
            case 0x206CD4u: goto label_206cd4;
            case 0x206CE8u: goto label_206ce8;
            case 0x206D0Cu: goto label_206d0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206C64u;
label_206c64:
    // 0x206c64: 0x3c040031
    ctx->pc = 0x206c64u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
label_206c68:
    // 0x206c68: 0x24840e90
    ctx->pc = 0x206c68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3728));
label_206c6c:
    // 0x206c6c: 0x24c20003
    ctx->pc = 0x206c6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 3));
    // 0x206c70: 0x2405ffff
    ctx->pc = 0x206c70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x206c74: 0xa6182a
    ctx->pc = 0x206c74u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x206c78: 0xc3100b
    ctx->pc = 0x206c78u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x206c7c: 0x21083
    ctx->pc = 0x206c7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x206c80: 0x21080
    ctx->pc = 0x206c80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x206c84: 0xc23823
    ctx->pc = 0x206c84u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x206c88: 0x71080
    ctx->pc = 0x206c88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x206c8c: 0x441821
    ctx->pc = 0x206c8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x206c90: 0x8c620000
    ctx->pc = 0x206c90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x206c94: 0x1445000f
    ctx->pc = 0x206C94u;
    {
        const bool branch_taken_0x206c94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        ctx->pc = 0x206C98u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x206c94) {
            ctx->pc = 0x206CD4u;
            goto label_206cd4;
        }
    }
    ctx->pc = 0x206C9Cu;
    // 0x206c9c: 0xac660000
    ctx->pc = 0x206c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x206ca0: 0x3c030031
    ctx->pc = 0x206ca0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x206ca4: 0x24630ea0
    ctx->pc = 0x206ca4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3744));
    // 0x206ca8: 0x61080
    ctx->pc = 0x206ca8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x206cac: 0x431021
    ctx->pc = 0x206cacu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206cb0: 0xac470000
    ctx->pc = 0x206cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x206cb4: 0x3c040032
    ctx->pc = 0x206cb4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x206cb8: 0x24020001
    ctx->pc = 0x206cb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x206cbc: 0xe21004
    ctx->pc = 0x206cbcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x206cc0: 0x8c8307b4
    ctx->pc = 0x206cc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 1972)));
    // 0x206cc4: 0x431025
    ctx->pc = 0x206cc4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206cc8: 0xac8207b4
    ctx->pc = 0x206cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1972), GPR_U32(ctx, 2));
    // 0x206ccc: 0x3e00008
    ctx->pc = 0x206CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206CD0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206BB8u: goto label_206bb8;
            case 0x206C30u: goto label_206c30;
            case 0x206C64u: goto label_206c64;
            case 0x206C68u: goto label_206c68;
            case 0x206C6Cu: goto label_206c6c;
            case 0x206CD4u: goto label_206cd4;
            case 0x206CE8u: goto label_206ce8;
            case 0x206D0Cu: goto label_206d0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206CD4u;
label_206cd4:
    // 0x206cd4: 0x3c020031
    ctx->pc = 0x206cd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x206cd8: 0x24470e90
    ctx->pc = 0x206cd8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 3728));
    // 0x206cdc: 0x2404ffff
    ctx->pc = 0x206cdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x206ce0: 0x51080
    ctx->pc = 0x206ce0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x206ce4: 0x0
    ctx->pc = 0x206ce4u;
    // NOP
label_206ce8:
    // 0x206ce8: 0x471821
    ctx->pc = 0x206ce8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x206cec: 0x8c620000
    ctx->pc = 0x206cecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x206cf0: 0x5044ffcf
    ctx->pc = 0x206CF0u;
    {
        const bool branch_taken_0x206cf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x206cf0) {
            ctx->pc = 0x206CF4u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
            ctx->pc = 0x206C30u;
            goto label_206c30;
        }
    }
    ctx->pc = 0x206CF8u;
    // 0x206cf8: 0x24a50001
    ctx->pc = 0x206cf8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x206cfc: 0x28a20004
    ctx->pc = 0x206cfcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x206d00: 0x1440fff9
    ctx->pc = 0x206D00u;
    {
        const bool branch_taken_0x206d00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x206D04u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x206d00) {
            ctx->pc = 0x206CE8u;
            goto label_206ce8;
        }
    }
    ctx->pc = 0x206D08u;
    // 0x206d08: 0x2402ffff
    ctx->pc = 0x206d08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_206d0c:
    // 0x206d0c: 0x3e00008
    ctx->pc = 0x206D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206BB8u: goto label_206bb8;
            case 0x206C30u: goto label_206c30;
            case 0x206C64u: goto label_206c64;
            case 0x206C68u: goto label_206c68;
            case 0x206C6Cu: goto label_206c6c;
            case 0x206CD4u: goto label_206cd4;
            case 0x206CE8u: goto label_206ce8;
            case 0x206D0Cu: goto label_206d0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206D14u;
}
