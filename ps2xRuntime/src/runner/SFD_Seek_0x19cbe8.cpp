#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_Seek
// Address: 0x19cbe8 - 0x19ccc0
void SFD_Seek_0x19cbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_Seek");


    ctx->pc = 0x19cbe8u;

    // 0x19cbe8: 0x27bdffc0
    ctx->pc = 0x19cbe8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19cbec: 0xffb00000
    ctx->pc = 0x19cbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19cbf0: 0xffb20020
    ctx->pc = 0x19cbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19cbf4: 0x80802d
    ctx->pc = 0x19cbf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cbf8: 0xffbf0030
    ctx->pc = 0x19cbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19cbfc: 0xa0902d
    ctx->pc = 0x19cbfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc00: 0xc064f1e
    ctx->pc = 0x19CC00u;
    SET_GPR_U32(ctx, 31, 0x19CC08u);
    ctx->pc = 0x19CC04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC08u; }
        else if (ctx->pc != 0x19CC08u) { ctx->pc = 0x19CC08u; }
    }
    if (ctx->pc != 0x19CC08u) { return; }
    ctx->pc = 0x19CC08u;
    // 0x19cc08: 0x10400006
    ctx->pc = 0x19CC08u;
    {
        const bool branch_taken_0x19cc08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CC0Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19cc08) {
            ctx->pc = 0x19CC24u;
            goto label_19cc24;
        }
    }
    ctx->pc = 0x19CC10u;
    // 0x19cc10: 0x3c05ff00
    ctx->pc = 0x19cc10u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19cc14: 0xc064ea0
    ctx->pc = 0x19CC14u;
    SET_GPR_U32(ctx, 31, 0x19CC1Cu);
    ctx->pc = 0x19CC18u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 344));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC1Cu; }
        else if (ctx->pc != 0x19CC1Cu) { ctx->pc = 0x19CC1Cu; }
    }
    if (ctx->pc != 0x19CC1Cu) { return; }
    ctx->pc = 0x19CC1Cu;
    // 0x19cc1c: 0x10000023
    ctx->pc = 0x19CC1Cu;
    {
        const bool branch_taken_0x19cc1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CC20u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x19cc1c) {
            ctx->pc = 0x19CCACu;
            goto label_19ccac;
        }
    }
    ctx->pc = 0x19CC24u;
label_19cc24:
    // 0x19cc24: 0x8e116758
    ctx->pc = 0x19cc24u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 26456)));
    // 0x19cc28: 0x1220001f
    ctx->pc = 0x19CC28u;
    {
        const bool branch_taken_0x19cc28 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CC2Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19cc28) {
            ctx->pc = 0x19CCA8u;
            goto label_19cca8;
        }
    }
    ctx->pc = 0x19CC30u;
    // 0x19cc30: 0xc066f14
    ctx->pc = 0x19CC30u;
    SET_GPR_U32(ctx, 31, 0x19CC38u);
    ctx->pc = 0x19CC34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19BC50u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFPLY_Stop_0x19bc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC38u; }
        else if (ctx->pc != 0x19CC38u) { ctx->pc = 0x19CC38u; }
    }
    if (ctx->pc != 0x19CC38u) { return; }
    ctx->pc = 0x19CC38u;
    // 0x19cc38: 0x1440001c
    ctx->pc = 0x19CC38u;
    {
        const bool branch_taken_0x19cc38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19CC3Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x19cc38) {
            ctx->pc = 0x19CCACu;
            goto label_19ccac;
        }
    }
    ctx->pc = 0x19CC40u;
    // 0x19cc40: 0x200202d
    ctx->pc = 0x19cc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc44: 0x2405002f
    ctx->pc = 0x19cc44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
    // 0x19cc48: 0xc067464
    ctx->pc = 0x19CC48u;
    SET_GPR_U32(ctx, 31, 0x19CC50u);
    ctx->pc = 0x19CC4Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_SetCond_0x19d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC50u; }
        else if (ctx->pc != 0x19CC50u) { ctx->pc = 0x19CC50u; }
    }
    if (ctx->pc != 0x19CC50u) { return; }
    ctx->pc = 0x19CC50u;
    // 0x19cc50: 0x8e220da4
    ctx->pc = 0x19cc50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 3492)));
    // 0x19cc54: 0x54400006
    ctx->pc = 0x19CC54u;
    {
        const bool branch_taken_0x19cc54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19cc54) {
            ctx->pc = 0x19CC58u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 3496)));
            ctx->pc = 0x19CC70u;
            goto label_19cc70;
        }
    }
    ctx->pc = 0x19CC5Cu;
    // 0x19cc5c: 0x200202d
    ctx->pc = 0x19cc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc60: 0x24050005
    ctx->pc = 0x19cc60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x19cc64: 0xc067464
    ctx->pc = 0x19CC64u;
    SET_GPR_U32(ctx, 31, 0x19CC6Cu);
    ctx->pc = 0x19CC68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_SetCond_0x19d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC6Cu; }
        else if (ctx->pc != 0x19CC6Cu) { ctx->pc = 0x19CC6Cu; }
    }
    if (ctx->pc != 0x19CC6Cu) { return; }
    ctx->pc = 0x19CC6Cu;
    // 0x19cc6c: 0x8e220da8
    ctx->pc = 0x19cc6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 3496)));
label_19cc70:
    // 0x19cc70: 0x14400004
    ctx->pc = 0x19CC70u;
    {
        const bool branch_taken_0x19cc70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19CC74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19cc70) {
            ctx->pc = 0x19CC84u;
            goto label_19cc84;
        }
    }
    ctx->pc = 0x19CC78u;
    // 0x19cc78: 0x24050006
    ctx->pc = 0x19cc78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x19cc7c: 0xc067464
    ctx->pc = 0x19CC7Cu;
    SET_GPR_U32(ctx, 31, 0x19CC84u);
    ctx->pc = 0x19CC80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_SetCond_0x19d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CC84u; }
        else if (ctx->pc != 0x19CC84u) { ctx->pc = 0x19CC84u; }
    }
    if (ctx->pc != 0x19CC84u) { return; }
    ctx->pc = 0x19CC84u;
label_19cc84:
    // 0x19cc84: 0x6a420007
    ctx->pc = 0x19cc84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x19cc88: 0x6e420000
    ctx->pc = 0x19cc88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19cc8c: 0x8e430008
    ctx->pc = 0x19cc8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x19cc90: 0xb2026763
    ctx->pc = 0x19cc90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 26467); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19cc94: 0xb602675c
    ctx->pc = 0x19cc94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 26460); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19cc98: 0xae036764
    ctx->pc = 0x19cc98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26468), GPR_U32(ctx, 3));
    // 0x19cc9c: 0x200202d
    ctx->pc = 0x19cc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cca0: 0xc067ca6
    ctx->pc = 0x19CCA0u;
    SET_GPR_U32(ctx, 31, 0x19CCA8u);
    ctx->pc = 0x19CCA4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 13));
    ctx->pc = 0x19F298u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_CallTrSetup_0x19f298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CCA8u; }
        else if (ctx->pc != 0x19CCA8u) { ctx->pc = 0x19CCA8u; }
    }
    if (ctx->pc != 0x19CCA8u) { return; }
    ctx->pc = 0x19CCA8u;
label_19cca8:
    // 0x19cca8: 0xdfbf0030
    ctx->pc = 0x19cca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19ccac:
    // 0x19ccac: 0xdfb20020
    ctx->pc = 0x19ccacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ccb0: 0xdfb10010
    ctx->pc = 0x19ccb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ccb4: 0xdfb00000
    ctx->pc = 0x19ccb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ccb8: 0x3e00008
    ctx->pc = 0x19CCB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CCBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19CC24u: goto label_19cc24;
            case 0x19CC70u: goto label_19cc70;
            case 0x19CC84u: goto label_19cc84;
            case 0x19CCA8u: goto label_19cca8;
            case 0x19CCACu: goto label_19ccac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19CCC0u;
}
