#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: clearVRAM
// Address: 0x102b50 - 0x102cb4
void clearVRAM_0x102b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x102b50u;

    // 0x102b50: 0x27bdffb0
    ctx->pc = 0x102b50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x102b54: 0x582d
    ctx->pc = 0x102b54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b58: 0xffb20020
    ctx->pc = 0x102b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x102b5c: 0xffb30030
    ctx->pc = 0x102b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x102b60: 0x3c121000
    ctx->pc = 0x102b60u;
    SET_GPR_U32(ctx, 18, ((uint32_t)4096 << 16));
    // 0x102b64: 0xffb00000
    ctx->pc = 0x102b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102b68: 0x36524006
    ctx->pc = 0x102b68u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 16390));
    // 0x102b6c: 0xffbf0040
    ctx->pc = 0x102b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x102b70: 0x802d
    ctx->pc = 0x102b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b74: 0xffb10010
    ctx->pc = 0x102b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x102b78: 0x3c130800
    ctx->pc = 0x102b78u;
    SET_GPR_U32(ctx, 19, ((uint32_t)2048 << 16));
    // 0x102b7c: 0x13983c
    ctx->pc = 0x102b7cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 0));
    // 0x102b80: 0x3673c000
    ctx->pc = 0x102b80u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), 49152));
    // 0x102b84: 0x10203c
    ctx->pc = 0x102b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
label_102b88:
    // 0x102b88: 0x34038000
    ctx->pc = 0x102b88u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x102b8c: 0x318fc
    ctx->pc = 0x102b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 3));
    // 0x102b90: 0x8f8282b8
    ctx->pc = 0x102b90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x102b94: 0x836025
    ctx->pc = 0x102b94u;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x102b98: 0x70001ca9
    ctx->pc = 0x102b98u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x102b9c: 0x3c051000
    ctx->pc = 0x102b9cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x102ba0: 0x5283c
    ctx->pc = 0x102ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x102ba4: 0x34a50004
    ctx->pc = 0x102ba4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 4));
    // 0x102ba8: 0x7c430000
    ctx->pc = 0x102ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x102bac: 0x24060050
    ctx->pc = 0x102bacu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 80));
    // 0x102bb0: 0x2403000e
    ctx->pc = 0x102bb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x102bb4: 0x24070051
    ctx->pc = 0x102bb4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 81));
    // 0x102bb8: 0x24080100
    ctx->pc = 0x102bb8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 256));
    // 0x102bbc: 0x8403c
    ctx->pc = 0x102bbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x102bc0: 0x35080100
    ctx->pc = 0x102bc0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 256));
    // 0x102bc4: 0x24090052
    ctx->pc = 0x102bc4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 82));
    // 0x102bc8: 0x240a0053
    ctx->pc = 0x102bc8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 83));
    // 0x102bcc: 0xfc450010
    ctx->pc = 0x102bccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x102bd0: 0xfc430018
    ctx->pc = 0x102bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x102bd4: 0x26100400
    ctx->pc = 0x102bd4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1024));
    // 0x102bd8: 0xfc4c0020
    ctx->pc = 0x102bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 12));
    // 0x102bdc: 0x25710001
    ctx->pc = 0x102bdcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 11), 1));
    // 0x102be0: 0xfc460028
    ctx->pc = 0x102be0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 6));
    // 0x102be4: 0x24450070
    ctx->pc = 0x102be4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 112));
    // 0x102be8: 0xfc470038
    ctx->pc = 0x102be8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 7));
    // 0x102bec: 0x24043fff
    ctx->pc = 0x102becu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16383));
    // 0x102bf0: 0xfc480040
    ctx->pc = 0x102bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 8));
    // 0x102bf4: 0xfc490048
    ctx->pc = 0x102bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 9));
    // 0x102bf8: 0xfc4a0058
    ctx->pc = 0x102bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 88), GPR_U64(ctx, 10));
    // 0x102bfc: 0xac520000
    ctx->pc = 0x102bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x102c00: 0xfc400030
    ctx->pc = 0x102c00u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 0));
    // 0x102c04: 0xfc400050
    ctx->pc = 0x102c04u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 0));
    // 0x102c08: 0xfc530060
    ctx->pc = 0x102c08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 96), GPR_U64(ctx, 19));
    // 0x102c0c: 0xfc400068
    ctx->pc = 0x102c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 0));
label_102c10:
    // 0x102c10: 0x700014a9
    ctx->pc = 0x102c10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x102c14: 0x2484ffff
    ctx->pc = 0x102c14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x102c18: 0x7ca20000
    ctx->pc = 0x102c18u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x102c1c: 0x24a50010
    ctx->pc = 0x102c1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x102c20: 0x0
    ctx->pc = 0x102c20u;
    // NOP
    // 0x102c24: 0x481fffa
    ctx->pc = 0x102C24u;
    {
        const bool branch_taken_0x102c24 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x102c24) {
            ctx->pc = 0x102C10u;
            goto label_102c10;
        }
    }
    ctx->pc = 0x102C2Cu;
    // 0x102c2c: 0xc043948
    ctx->pc = 0x102C2Cu;
    SET_GPR_U32(ctx, 31, 0x102C34u);
    ctx->pc = 0x102C30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10E520u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102C34u; }
    }
    if (ctx->pc != 0x102C34u) { return; }
    ctx->pc = 0x102C34u;
    // 0x102c34: 0x8f8282b8
    ctx->pc = 0x102c34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x102c38: 0x3c050fff
    ctx->pc = 0x102c38u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4095 << 16));
    // 0x102c3c: 0x34a5ffff
    ctx->pc = 0x102c3cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x102c40: 0x8f848490
    ctx->pc = 0x102c40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x102c44: 0xc0435d6
    ctx->pc = 0x102C44u;
    SET_GPR_U32(ctx, 31, 0x102C4Cu);
    ctx->pc = 0x102C48u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->pc = 0x10D758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102C4Cu; }
    }
    if (ctx->pc != 0x102C4Cu) { return; }
    ctx->pc = 0x102C4Cu;
    // 0x102c4c: 0x3c031000
    ctx->pc = 0x102c4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x102c50: 0x3463a000
    ctx->pc = 0x102c50u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 40960));
    // 0x102c54: 0x0
    ctx->pc = 0x102c54u;
    // NOP
label_102c58:
    // 0x102c58: 0x8c620000
    ctx->pc = 0x102c58u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x102c5c: 0x30420100
    ctx->pc = 0x102c5cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x102c60: 0x0
    ctx->pc = 0x102c60u;
    // NOP
    // 0x102c64: 0x0
    ctx->pc = 0x102c64u;
    // NOP
    // 0x102c68: 0x0
    ctx->pc = 0x102c68u;
    // NOP
    // 0x102c6c: 0x1440fffa
    ctx->pc = 0x102C6Cu;
    {
        const bool branch_taken_0x102c6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x102c6c) {
            ctx->pc = 0x102C58u;
            goto label_102c58;
        }
    }
    ctx->pc = 0x102C74u;
    // 0x102c74: 0x202d
    ctx->pc = 0x102c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c78: 0xc043322
    ctx->pc = 0x102C78u;
    SET_GPR_U32(ctx, 31, 0x102C80u);
    ctx->pc = 0x102C7Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102C80u; }
    }
    if (ctx->pc != 0x102C80u) { return; }
    ctx->pc = 0x102C80u;
    // 0x102c80: 0xc043948
    ctx->pc = 0x102C80u;
    SET_GPR_U32(ctx, 31, 0x102C88u);
    ctx->pc = 0x102C84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10E520u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102C88u; }
    }
    if (ctx->pc != 0x102C88u) { return; }
    ctx->pc = 0x102C88u;
    // 0x102c88: 0x220582d
    ctx->pc = 0x102c88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c8c: 0x29620010
    ctx->pc = 0x102c8cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 11), 16));
    // 0x102c90: 0x5440ffbd
    ctx->pc = 0x102C90u;
    {
        const bool branch_taken_0x102c90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x102c90) {
            ctx->pc = 0x102C94u;
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
            ctx->pc = 0x102B88u;
            goto label_102b88;
        }
    }
    ctx->pc = 0x102C98u;
    // 0x102c98: 0xdfbf0040
    ctx->pc = 0x102c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x102c9c: 0xdfb30030
    ctx->pc = 0x102c9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102ca0: 0xdfb20020
    ctx->pc = 0x102ca0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102ca4: 0xdfb10010
    ctx->pc = 0x102ca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102ca8: 0xdfb00000
    ctx->pc = 0x102ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102cac: 0x3e00008
    ctx->pc = 0x102CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102CB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102B88u: goto label_102b88;
            case 0x102C10u: goto label_102c10;
            case 0x102C58u: goto label_102c58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102CB4u;
}
