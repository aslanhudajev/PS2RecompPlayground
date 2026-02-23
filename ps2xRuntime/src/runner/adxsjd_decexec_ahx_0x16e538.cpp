#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxsjd_decexec_ahx
// Address: 0x16e538 - 0x16e5c4
void adxsjd_decexec_ahx_0x16e538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxsjd_decexec_ahx");


    ctx->pc = 0x16e538u;

    // 0x16e538: 0x27bdffb0
    ctx->pc = 0x16e538u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16e53c: 0xffb30030
    ctx->pc = 0x16e53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x16e540: 0xffb20020
    ctx->pc = 0x16e540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16e544: 0xffb00000
    ctx->pc = 0x16e544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16e548: 0x80902d
    ctx->pc = 0x16e548u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e54c: 0xffbf0040
    ctx->pc = 0x16e54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16e550: 0xffb10010
    ctx->pc = 0x16e550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16e554: 0x8e510004
    ctx->pc = 0x16e554u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x16e558: 0xc05a01e
    ctx->pc = 0x16E558u;
    SET_GPR_U32(ctx, 31, 0x16E560u);
    ctx->pc = 0x16E55Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168078u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetTotalNumSmpl_0x168078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E560u; }
        else if (ctx->pc != 0x16E560u) { ctx->pc = 0x16E560u; }
    }
    if (ctx->pc != 0x16E560u) { return; }
    ctx->pc = 0x16E560u;
    // 0x16e560: 0x40802d
    ctx->pc = 0x16e560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e564: 0xc05a074
    ctx->pc = 0x16E564u;
    SET_GPR_U32(ctx, 31, 0x16E56Cu);
    ctx->pc = 0x16E568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1681D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetDecDtLen_0x1681d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E56Cu; }
        else if (ctx->pc != 0x16E56Cu) { ctx->pc = 0x16E56Cu; }
    }
    if (ctx->pc != 0x16E56Cu) { return; }
    ctx->pc = 0x16E56Cu;
    // 0x16e56c: 0x40982d
    ctx->pc = 0x16e56cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e570: 0xc05a076
    ctx->pc = 0x16E570u;
    SET_GPR_U32(ctx, 31, 0x16E578u);
    ctx->pc = 0x16E574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1681D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetDecNumSmpl_0x1681d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E578u; }
        else if (ctx->pc != 0x16E578u) { ctx->pc = 0x16E578u; }
    }
    if (ctx->pc != 0x16E578u) { return; }
    ctx->pc = 0x16E578u;
    // 0x16e578: 0x8e440034
    ctx->pc = 0x16e578u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x16e57c: 0x8e46002c
    ctx->pc = 0x16e57cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x16e580: 0x2048023
    ctx->pc = 0x16e580u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x16e584: 0x8e450030
    ctx->pc = 0x16e584u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x16e588: 0x50182a
    ctx->pc = 0x16e588u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x16e58c: 0xdfbf0040
    ctx->pc = 0x16e58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16e590: 0x43800b
    ctx->pc = 0x16e590u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
    // 0x16e594: 0xb32821
    ctx->pc = 0x16e594u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x16e598: 0x902021
    ctx->pc = 0x16e598u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x16e59c: 0xd03021
    ctx->pc = 0x16e59cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x16e5a0: 0xae440034
    ctx->pc = 0x16e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 4));
    // 0x16e5a4: 0xae46002c
    ctx->pc = 0x16e5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 6));
    // 0x16e5a8: 0xae450030
    ctx->pc = 0x16e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 5));
    // 0x16e5ac: 0xdfb30030
    ctx->pc = 0x16e5acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e5b0: 0xdfb20020
    ctx->pc = 0x16e5b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e5b4: 0xdfb10010
    ctx->pc = 0x16e5b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e5b8: 0xdfb00000
    ctx->pc = 0x16e5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e5bc: 0x3e00008
    ctx->pc = 0x16E5BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E5C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E5C4u;
}
