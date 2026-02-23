#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxf_SetAfsFileInfo
// Address: 0x16b678 - 0x16b710
void adxf_SetAfsFileInfo_0x16b678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxf_SetAfsFileInfo");


    ctx->pc = 0x16b678u;

    // 0x16b678: 0x27bdfed0
    ctx->pc = 0x16b678u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x16b67c: 0xffb00110
    ctx->pc = 0x16b67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x16b680: 0x27a70100
    ctx->pc = 0x16b680u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 256));
    // 0x16b684: 0x80802d
    ctx->pc = 0x16b684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b688: 0xffbf0120
    ctx->pc = 0x16b688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x16b68c: 0xa0202d
    ctx->pc = 0x16b68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b690: 0x27a80104
    ctx->pc = 0x16b690u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 260));
    // 0x16b694: 0xc0282d
    ctx->pc = 0x16b694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b698: 0x27a90108
    ctx->pc = 0x16b698u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 264));
    // 0x16b69c: 0xc05b0a2
    ctx->pc = 0x16B69Cu;
    SET_GPR_U32(ctx, 31, 0x16B6A4u);
    ctx->pc = 0x16B6A0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16C288u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetFnameRangeEx_0x16c288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B6A4u; }
        else if (ctx->pc != 0x16B6A4u) { ctx->pc = 0x16B6A4u; }
    }
    if (ctx->pc != 0x16B6A4u) { return; }
    ctx->pc = 0x16B6A4u;
    // 0x16b6a4: 0x4410003
    ctx->pc = 0x16B6A4u;
    {
        const bool branch_taken_0x16b6a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x16B6A8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 260)));
        if (branch_taken_0x16b6a4) {
            ctx->pc = 0x16B6B4u;
            goto label_16b6b4;
        }
    }
    ctx->pc = 0x16B6ACu;
    // 0x16b6ac: 0x10000014
    ctx->pc = 0x16B6ACu;
    {
        const bool branch_taken_0x16b6ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B6B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x16b6ac) {
            ctx->pc = 0x16B700u;
            goto label_16b700;
        }
    }
    ctx->pc = 0x16B6B4u;
label_16b6b4:
    // 0x16b6b4: 0x3a0202d
    ctx->pc = 0x16b6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b6b8: 0x8fa50100
    ctx->pc = 0x16b6b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x16b6bc: 0x402d
    ctx->pc = 0x16b6bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b6c0: 0x8fa70108
    ctx->pc = 0x16b6c0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x16b6c4: 0x40302d
    ctx->pc = 0x16b6c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b6c8: 0xc05c21c
    ctx->pc = 0x16B6C8u;
    SET_GPR_U32(ctx, 31, 0x16B6D0u);
    ctx->pc = 0x16B6CCu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x170870u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_OpenFileRangeEx_0x170870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B6D0u; }
        else if (ctx->pc != 0x16B6D0u) { ctx->pc = 0x16B6D0u; }
    }
    if (ctx->pc != 0x16B6D0u) { return; }
    ctx->pc = 0x16B6D0u;
    // 0x16b6d0: 0x14400006
    ctx->pc = 0x16B6D0u;
    {
        const bool branch_taken_0x16b6d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16B6D4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x16b6d0) {
            ctx->pc = 0x16B6ECu;
            goto label_16b6ec;
        }
    }
    ctx->pc = 0x16B6D8u;
    // 0x16b6d8: 0x3c04002c
    ctx->pc = 0x16b6d8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16b6dc: 0xc05a854
    ctx->pc = 0x16B6DCu;
    SET_GPR_U32(ctx, 31, 0x16B6E4u);
    ctx->pc = 0x16B6E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939712));
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B6E4u; }
        else if (ctx->pc != 0x16B6E4u) { ctx->pc = 0x16B6E4u; }
    }
    if (ctx->pc != 0x16B6E4u) { return; }
    ctx->pc = 0x16B6E4u;
    // 0x16b6e4: 0x10000006
    ctx->pc = 0x16B6E4u;
    {
        const bool branch_taken_0x16b6e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B6E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x16b6e4) {
            ctx->pc = 0x16B700u;
            goto label_16b700;
        }
    }
    ctx->pc = 0x16B6ECu;
label_16b6ec:
    // 0x16b6ec: 0x8fa30108
    ctx->pc = 0x16b6ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x16b6f0: 0x102d
    ctx->pc = 0x16b6f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b6f4: 0x322c0
    ctx->pc = 0x16b6f4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 11));
    // 0x16b6f8: 0xae03000c
    ctx->pc = 0x16b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x16b6fc: 0xae040010
    ctx->pc = 0x16b6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_16b700:
    // 0x16b700: 0xdfbf0120
    ctx->pc = 0x16b700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x16b704: 0xdfb00110
    ctx->pc = 0x16b704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x16b708: 0x3e00008
    ctx->pc = 0x16B708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B70Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B6B4u: goto label_16b6b4;
            case 0x16B6ECu: goto label_16b6ec;
            case 0x16B700u: goto label_16b700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B710u;
}
