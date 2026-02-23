#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJX_Create
// Address: 0x17da48 - 0x17db40
void SJX_Create_0x17da48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJX_Create");


    ctx->pc = 0x17da48u;

    // 0x17da48: 0x27bdffa0
    ctx->pc = 0x17da48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17da4c: 0x3c020024
    ctx->pc = 0x17da4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x17da50: 0xffb10020
    ctx->pc = 0x17da50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x17da54: 0xffb30040
    ctx->pc = 0x17da54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x17da58: 0x80882d
    ctx->pc = 0x17da58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da5c: 0xffb20030
    ctx->pc = 0x17da5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x17da60: 0xc0982d
    ctx->pc = 0x17da60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da64: 0xffb00010
    ctx->pc = 0x17da64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17da68: 0xa0902d
    ctx->pc = 0x17da68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da6c: 0x80430968
    ctx->pc = 0x17da6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x17da70: 0x202d
    ctx->pc = 0x17da70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da74: 0xffbf0050
    ctx->pc = 0x17da74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17da78: 0x1060000b
    ctx->pc = 0x17DA78u;
    {
        const bool branch_taken_0x17da78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x17DA7Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 2408));
        if (branch_taken_0x17da78) {
            ctx->pc = 0x17DAA8u;
            goto label_17daa8;
        }
    }
    ctx->pc = 0x17DA80u;
    // 0x17da80: 0x200282d
    ctx->pc = 0x17da80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da84: 0x200182d
    ctx->pc = 0x17da84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17da88:
    // 0x17da88: 0x24840001
    ctx->pc = 0x17da88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x17da8c: 0x24a50014
    ctx->pc = 0x17da8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20));
    // 0x17da90: 0x28820010
    ctx->pc = 0x17da90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 16));
    // 0x17da94: 0x10400004
    ctx->pc = 0x17DA94u;
    {
        const bool branch_taken_0x17da94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17DA98u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20));
        if (branch_taken_0x17da94) {
            ctx->pc = 0x17DAA8u;
            goto label_17daa8;
        }
    }
    ctx->pc = 0x17DA9Cu;
    // 0x17da9c: 0x80a20000
    ctx->pc = 0x17da9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17daa0: 0x1440fff9
    ctx->pc = 0x17DAA0u;
    {
        const bool branch_taken_0x17daa0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17DAA4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17daa0) {
            ctx->pc = 0x17DA88u;
            goto label_17da88;
        }
    }
    ctx->pc = 0x17DAA8u;
label_17daa8:
    // 0x17daa8: 0x24020010
    ctx->pc = 0x17daa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x17daac: 0x14820003
    ctx->pc = 0x17DAACu;
    {
        const bool branch_taken_0x17daac = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x17DAB0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17daac) {
            ctx->pc = 0x17DABCu;
            goto label_17dabc;
        }
    }
    ctx->pc = 0x17DAB4u;
    // 0x17dab4: 0x1000001b
    ctx->pc = 0x17DAB4u;
    {
        const bool branch_taken_0x17dab4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17DAB8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17dab4) {
            ctx->pc = 0x17DB24u;
            goto label_17db24;
        }
    }
    ctx->pc = 0x17DABCu;
label_17dabc:
    // 0x17dabc: 0x282d
    ctx->pc = 0x17dabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dac0: 0xc050cfe
    ctx->pc = 0x17DAC0u;
    SET_GPR_U32(ctx, 31, 0x17DAC8u);
    ctx->pc = 0x17DAC4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DAC8u; }
        else if (ctx->pc != 0x17DAC8u) { ctx->pc = 0x17DAC8u; }
    }
    if (ctx->pc != 0x17DAC8u) { return; }
    ctx->pc = 0x17DAC8u;
    // 0x17dac8: 0xae13000c
    ctx->pc = 0x17dac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    // 0x17dacc: 0x202d
    ctx->pc = 0x17daccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dad0: 0xae110004
    ctx->pc = 0x17dad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x17dad4: 0x3a0282d
    ctx->pc = 0x17dad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dad8: 0xae120008
    ctx->pc = 0x17dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x17dadc: 0x24060004
    ctx->pc = 0x17dadcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x17dae0: 0xafb10000
    ctx->pc = 0x17dae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x17dae4: 0x3a0382d
    ctx->pc = 0x17dae4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dae8: 0xafb20004
    ctx->pc = 0x17dae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x17daec: 0x24080001
    ctx->pc = 0x17daecu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17daf0: 0xafb30008
    ctx->pc = 0x17daf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x17daf4: 0xc05dcd2
    ctx->pc = 0x17DAF4u;
    SET_GPR_U32(ctx, 31, 0x17DAFCu);
    ctx->pc = 0x17DAF8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
    ctx->pc = 0x177348u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_CallUrpc_0x177348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DAFCu; }
        else if (ctx->pc != 0x17DAFCu) { ctx->pc = 0x17DAFCu; }
    }
    if (ctx->pc != 0x17DAFCu) { return; }
    ctx->pc = 0x17DAFCu;
    // 0x17dafc: 0x14400006
    ctx->pc = 0x17DAFCu;
    {
        const bool branch_taken_0x17dafc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17DB00u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x17dafc) {
            ctx->pc = 0x17DB18u;
            goto label_17db18;
        }
    }
    ctx->pc = 0x17DB04u;
    // 0x17db04: 0x3c04002c
    ctx->pc = 0x17db04u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17db08: 0xc05114a
    ctx->pc = 0x17DB08u;
    SET_GPR_U32(ctx, 31, 0x17DB10u);
    ctx->pc = 0x17DB0Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951016));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB10u; }
        else if (ctx->pc != 0x17DB10u) { ctx->pc = 0x17DB10u; }
    }
    if (ctx->pc != 0x17DB10u) { return; }
    ctx->pc = 0x17DB10u;
    // 0x17db10: 0x10000004
    ctx->pc = 0x17DB10u;
    {
        const bool branch_taken_0x17db10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17DB14u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17db10) {
            ctx->pc = 0x17DB24u;
            goto label_17db24;
        }
    }
    ctx->pc = 0x17DB18u;
label_17db18:
    // 0x17db18: 0x24030001
    ctx->pc = 0x17db18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17db1c: 0x200102d
    ctx->pc = 0x17db1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db20: 0xa2030000
    ctx->pc = 0x17db20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_17db24:
    // 0x17db24: 0xdfbf0050
    ctx->pc = 0x17db24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17db28: 0xdfb30040
    ctx->pc = 0x17db28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17db2c: 0xdfb20030
    ctx->pc = 0x17db2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17db30: 0xdfb10020
    ctx->pc = 0x17db30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17db34: 0xdfb00010
    ctx->pc = 0x17db34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17db38: 0x3e00008
    ctx->pc = 0x17DB38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DB3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DA88u: goto label_17da88;
            case 0x17DAA8u: goto label_17daa8;
            case 0x17DABCu: goto label_17dabc;
            case 0x17DB18u: goto label_17db18;
            case 0x17DB24u: goto label_17db24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17DB40u;
}
