#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSTM_SeekSct
// Address: 0x18f8a8 - 0x18f948
void MWSTM_SeekSct_0x18f8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSTM_SeekSct");


    ctx->pc = 0x18f8a8u;

    // 0x18f8a8: 0x27bdffd0
    ctx->pc = 0x18f8a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18f8ac: 0xffb10010
    ctx->pc = 0x18f8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18f8b0: 0xffb00000
    ctx->pc = 0x18f8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18f8b4: 0xa0882d
    ctx->pc = 0x18f8b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f8b8: 0xffbf0020
    ctx->pc = 0x18f8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18f8bc: 0x14c00005
    ctx->pc = 0x18F8BCu;
    {
        const bool branch_taken_0x18f8bc = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x18F8C0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18f8bc) {
            ctx->pc = 0x18F8D4u;
            goto label_18f8d4;
        }
    }
    ctx->pc = 0x18F8C4u;
    // 0x18f8c4: 0xc05c2e2
    ctx->pc = 0x18F8C4u;
    SET_GPR_U32(ctx, 31, 0x18F8CCu);
    ctx->pc = 0x170B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Seek_0x170b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F8CCu; }
        else if (ctx->pc != 0x18F8CCu) { ctx->pc = 0x18F8CCu; }
    }
    if (ctx->pc != 0x18F8CCu) { return; }
    ctx->pc = 0x18F8CCu;
    // 0x18f8cc: 0x10000019
    ctx->pc = 0x18F8CCu;
    {
        const bool branch_taken_0x18f8cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F8D0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x18f8cc) {
            ctx->pc = 0x18F934u;
            goto label_18f934;
        }
    }
    ctx->pc = 0x18F8D4u;
label_18f8d4:
    // 0x18f8d4: 0x24020001
    ctx->pc = 0x18f8d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f8d8: 0x14c20008
    ctx->pc = 0x18F8D8u;
    {
        const bool branch_taken_0x18f8d8 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x18F8DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x18f8d8) {
            ctx->pc = 0x18F8FCu;
            goto label_18f8fc;
        }
    }
    ctx->pc = 0x18F8E0u;
    // 0x18f8e0: 0xc05c2f4
    ctx->pc = 0x18F8E0u;
    SET_GPR_U32(ctx, 31, 0x18F8E8u);
    ctx->pc = 0x18F8E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170BD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Tell_0x170bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F8E8u; }
        else if (ctx->pc != 0x18F8E8u) { ctx->pc = 0x18F8E8u; }
    }
    if (ctx->pc != 0x18F8E8u) { return; }
    ctx->pc = 0x18F8E8u;
    // 0x18f8e8: 0x512821
    ctx->pc = 0x18f8e8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18f8ec: 0xc05c2e2
    ctx->pc = 0x18F8ECu;
    SET_GPR_U32(ctx, 31, 0x18F8F4u);
    ctx->pc = 0x18F8F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Seek_0x170b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F8F4u; }
        else if (ctx->pc != 0x18F8F4u) { ctx->pc = 0x18F8F4u; }
    }
    if (ctx->pc != 0x18F8F4u) { return; }
    ctx->pc = 0x18F8F4u;
    // 0x18f8f4: 0x1000000f
    ctx->pc = 0x18F8F4u;
    {
        const bool branch_taken_0x18f8f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18F8F8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x18f8f4) {
            ctx->pc = 0x18F934u;
            goto label_18f934;
        }
    }
    ctx->pc = 0x18F8FCu;
label_18f8fc:
    // 0x18f8fc: 0x14c2000d
    ctx->pc = 0x18F8FCu;
    {
        const bool branch_taken_0x18f8fc = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x18F900u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x18f8fc) {
            ctx->pc = 0x18F934u;
            goto label_18f934;
        }
    }
    ctx->pc = 0x18F904u;
    // 0x18f904: 0xc05c442
    ctx->pc = 0x18F904u;
    SET_GPR_U32(ctx, 31, 0x18F90Cu);
    ctx->pc = 0x18F908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171108u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_GetFileLen_0x171108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F90Cu; }
        else if (ctx->pc != 0x18F90Cu) { ctx->pc = 0x18F90Cu; }
    }
    if (ctx->pc != 0x18F90Cu) { return; }
    ctx->pc = 0x18F90Cu;
    // 0x18f90c: 0x244507ff
    ctx->pc = 0x18f90cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x18f910: 0x2403ffff
    ctx->pc = 0x18f910u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18f914: 0x65182a
    ctx->pc = 0x18f914u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x18f918: 0x24420ffe
    ctx->pc = 0x18f918u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4094));
    // 0x18f91c: 0xa3100b
    ctx->pc = 0x18f91cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x18f920: 0x200202d
    ctx->pc = 0x18f920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f924: 0x212c3
    ctx->pc = 0x18f924u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x18f928: 0xc05c2e2
    ctx->pc = 0x18F928u;
    SET_GPR_U32(ctx, 31, 0x18F930u);
    ctx->pc = 0x18F92Cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x170B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Seek_0x170b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F930u; }
        else if (ctx->pc != 0x18F930u) { ctx->pc = 0x18F930u; }
    }
    if (ctx->pc != 0x18F930u) { return; }
    ctx->pc = 0x18F930u;
    // 0x18f930: 0xdfbf0020
    ctx->pc = 0x18f930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18f934:
    // 0x18f934: 0x102d
    ctx->pc = 0x18f934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f938: 0xdfb10010
    ctx->pc = 0x18f938u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f93c: 0xdfb00000
    ctx->pc = 0x18f93cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f940: 0x3e00008
    ctx->pc = 0x18F940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F944u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18F8D4u: goto label_18f8d4;
            case 0x18F8FCu: goto label_18f8fc;
            case 0x18F934u: goto label_18f934;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18F948u;
}
