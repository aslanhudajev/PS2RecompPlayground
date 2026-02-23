#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftrn_BuildAll
// Address: 0x19eef8 - 0x19f004
void sftrn_BuildAll_0x19eef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftrn_BuildAll");


    ctx->pc = 0x19eef8u;

    // 0x19eef8: 0x27bdffd0
    ctx->pc = 0x19eef8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19eefc: 0xffb10010
    ctx->pc = 0x19eefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19ef00: 0xffb00000
    ctx->pc = 0x19ef00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ef04: 0xa0882d
    ctx->pc = 0x19ef04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef08: 0xffbf0020
    ctx->pc = 0x19ef08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19ef0c: 0x8e220004
    ctx->pc = 0x19ef0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19ef10: 0x10400009
    ctx->pc = 0x19EF10u;
    {
        const bool branch_taken_0x19ef10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EF14u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ef10) {
            ctx->pc = 0x19EF38u;
            goto label_19ef38;
        }
    }
    ctx->pc = 0x19EF18u;
    // 0x19ef18: 0x282d
    ctx->pc = 0x19ef18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef1c: 0xc067c80
    ctx->pc = 0x19EF1Cu;
    SET_GPR_U32(ctx, 31, 0x19EF24u);
    ctx->pc = 0x19EF20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_ConnTrnBuf0_0x19f200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF24u; }
        else if (ctx->pc != 0x19EF24u) { ctx->pc = 0x19EF24u; }
    }
    if (ctx->pc != 0x19EF24u) { return; }
    ctx->pc = 0x19EF24u;
    // 0x19ef24: 0x200202d
    ctx->pc = 0x19ef24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef28: 0xc067c02
    ctx->pc = 0x19EF28u;
    SET_GPR_U32(ctx, 31, 0x19EF30u);
    ctx->pc = 0x19EF2Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F008u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_BuildSystem_0x19f008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF30u; }
        else if (ctx->pc != 0x19EF30u) { ctx->pc = 0x19EF30u; }
    }
    if (ctx->pc != 0x19EF30u) { return; }
    ctx->pc = 0x19EF30u;
    // 0x19ef30: 0x1000002f
    ctx->pc = 0x19EF30u;
    {
        const bool branch_taken_0x19ef30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EF34u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ef30) {
            ctx->pc = 0x19EFF0u;
            goto label_19eff0;
        }
    }
    ctx->pc = 0x19EF38u;
label_19ef38:
    // 0x19ef38: 0x8e220008
    ctx->pc = 0x19ef38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19ef3c: 0x1040000a
    ctx->pc = 0x19EF3Cu;
    {
        const bool branch_taken_0x19ef3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EF40u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ef3c) {
            ctx->pc = 0x19EF68u;
            goto label_19ef68;
        }
    }
    ctx->pc = 0x19EF44u;
    // 0x19ef44: 0x282d
    ctx->pc = 0x19ef44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef48: 0xc067c80
    ctx->pc = 0x19EF48u;
    SET_GPR_U32(ctx, 31, 0x19EF50u);
    ctx->pc = 0x19EF4Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19F200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_ConnTrnBuf0_0x19f200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF50u; }
        else if (ctx->pc != 0x19EF50u) { ctx->pc = 0x19EF50u; }
    }
    if (ctx->pc != 0x19EF50u) { return; }
    ctx->pc = 0x19EF50u;
    // 0x19ef50: 0x220282d
    ctx->pc = 0x19ef50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef54: 0xc067c30
    ctx->pc = 0x19EF54u;
    SET_GPR_U32(ctx, 31, 0x19EF5Cu);
    ctx->pc = 0x19EF58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F0C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_BuildVideo_0x19f0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF5Cu; }
        else if (ctx->pc != 0x19EF5Cu) { ctx->pc = 0x19EF5Cu; }
    }
    if (ctx->pc != 0x19EF5Cu) { return; }
    ctx->pc = 0x19EF5Cu;
    // 0x19ef5c: 0x200202d
    ctx->pc = 0x19ef5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef60: 0x1000000b
    ctx->pc = 0x19EF60u;
    {
        const bool branch_taken_0x19ef60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EF64u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x19ef60) {
            ctx->pc = 0x19EF90u;
            goto label_19ef90;
        }
    }
    ctx->pc = 0x19EF68u;
label_19ef68:
    // 0x19ef68: 0x8e22000c
    ctx->pc = 0x19ef68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19ef6c: 0x1040000c
    ctx->pc = 0x19EF6Cu;
    {
        const bool branch_taken_0x19ef6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EF70u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ef6c) {
            ctx->pc = 0x19EFA0u;
            goto label_19efa0;
        }
    }
    ctx->pc = 0x19EF74u;
    // 0x19ef74: 0xc067c80
    ctx->pc = 0x19EF74u;
    SET_GPR_U32(ctx, 31, 0x19EF7Cu);
    ctx->pc = 0x19EF78u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x19F200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_ConnTrnBuf0_0x19f200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF7Cu; }
        else if (ctx->pc != 0x19EF7Cu) { ctx->pc = 0x19EF7Cu; }
    }
    if (ctx->pc != 0x19EF7Cu) { return; }
    ctx->pc = 0x19EF7Cu;
    // 0x19ef7c: 0x220282d
    ctx->pc = 0x19ef7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef80: 0xc067c56
    ctx->pc = 0x19EF80u;
    SET_GPR_U32(ctx, 31, 0x19EF88u);
    ctx->pc = 0x19EF84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_BuildAudio_0x19f158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF88u; }
        else if (ctx->pc != 0x19EF88u) { ctx->pc = 0x19EF88u; }
    }
    if (ctx->pc != 0x19EF88u) { return; }
    ctx->pc = 0x19EF88u;
    // 0x19ef88: 0x200202d
    ctx->pc = 0x19ef88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef8c: 0x24050005
    ctx->pc = 0x19ef8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
label_19ef90:
    // 0x19ef90: 0xc067464
    ctx->pc = 0x19EF90u;
    SET_GPR_U32(ctx, 31, 0x19EF98u);
    ctx->pc = 0x19EF94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_SetCond_0x19d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EF98u; }
        else if (ctx->pc != 0x19EF98u) { ctx->pc = 0x19EF98u; }
    }
    if (ctx->pc != 0x19EF98u) { return; }
    ctx->pc = 0x19EF98u;
    // 0x19ef98: 0x10000015
    ctx->pc = 0x19EF98u;
    {
        const bool branch_taken_0x19ef98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EF9Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ef98) {
            ctx->pc = 0x19EFF0u;
            goto label_19eff0;
        }
    }
    ctx->pc = 0x19EFA0u;
label_19efa0:
    // 0x19efa0: 0x8e220020
    ctx->pc = 0x19efa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x19efa4: 0x14400003
    ctx->pc = 0x19EFA4u;
    {
        const bool branch_taken_0x19efa4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19EFA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19efa4) {
            ctx->pc = 0x19EFB4u;
            goto label_19efb4;
        }
    }
    ctx->pc = 0x19EFACu;
    // 0x19efac: 0x10000010
    ctx->pc = 0x19EFACu;
    {
        const bool branch_taken_0x19efac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EFB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x19efac) {
            ctx->pc = 0x19EFF0u;
            goto label_19eff0;
        }
    }
    ctx->pc = 0x19EFB4u;
label_19efb4:
    // 0x19efb4: 0x282d
    ctx->pc = 0x19efb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19efb8: 0xc067c80
    ctx->pc = 0x19EFB8u;
    SET_GPR_U32(ctx, 31, 0x19EFC0u);
    ctx->pc = 0x19EFBCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x19F200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_ConnTrnBuf0_0x19f200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EFC0u; }
        else if (ctx->pc != 0x19EFC0u) { ctx->pc = 0x19EFC0u; }
    }
    if (ctx->pc != 0x19EFC0u) { return; }
    ctx->pc = 0x19EFC0u;
    // 0x19efc0: 0x220282d
    ctx->pc = 0x19efc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19efc4: 0xc067c7c
    ctx->pc = 0x19EFC4u;
    SET_GPR_U32(ctx, 31, 0x19EFCCu);
    ctx->pc = 0x19EFC8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F1F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_BuildUsr_0x19f1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EFCCu; }
        else if (ctx->pc != 0x19EFCCu) { ctx->pc = 0x19EFCCu; }
    }
    if (ctx->pc != 0x19EFCCu) { return; }
    ctx->pc = 0x19EFCCu;
    // 0x19efcc: 0x200202d
    ctx->pc = 0x19efccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19efd0: 0x24050006
    ctx->pc = 0x19efd0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x19efd4: 0xc067464
    ctx->pc = 0x19EFD4u;
    SET_GPR_U32(ctx, 31, 0x19EFDCu);
    ctx->pc = 0x19EFD8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_SetCond_0x19d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EFDCu; }
        else if (ctx->pc != 0x19EFDCu) { ctx->pc = 0x19EFDCu; }
    }
    if (ctx->pc != 0x19EFDCu) { return; }
    ctx->pc = 0x19EFDCu;
    // 0x19efdc: 0x200202d
    ctx->pc = 0x19efdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19efe0: 0x24050005
    ctx->pc = 0x19efe0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x19efe4: 0xc067464
    ctx->pc = 0x19EFE4u;
    SET_GPR_U32(ctx, 31, 0x19EFECu);
    ctx->pc = 0x19EFE8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_SetCond_0x19d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EFECu; }
        else if (ctx->pc != 0x19EFECu) { ctx->pc = 0x19EFECu; }
    }
    if (ctx->pc != 0x19EFECu) { return; }
    ctx->pc = 0x19EFECu;
    // 0x19efec: 0x102d
    ctx->pc = 0x19efecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19eff0:
    // 0x19eff0: 0xdfbf0020
    ctx->pc = 0x19eff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19eff4: 0xdfb10010
    ctx->pc = 0x19eff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19eff8: 0xdfb00000
    ctx->pc = 0x19eff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19effc: 0x3e00008
    ctx->pc = 0x19EFFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F000u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19EF38u: goto label_19ef38;
            case 0x19EF68u: goto label_19ef68;
            case 0x19EF90u: goto label_19ef90;
            case 0x19EFA0u: goto label_19efa0;
            case 0x19EFB4u: goto label_19efb4;
            case 0x19EFF0u: goto label_19eff0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F004u;
}
