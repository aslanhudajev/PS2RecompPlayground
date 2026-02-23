#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyGetSlFname
// Address: 0x18e660 - 0x18e6cc
void mwPlyGetSlFname_0x18e660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyGetSlFname");


    ctx->pc = 0x18e660u;

    // 0x18e660: 0x27bdffd0
    ctx->pc = 0x18e660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18e664: 0xffb10010
    ctx->pc = 0x18e664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18e668: 0xffb00000
    ctx->pc = 0x18e668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18e66c: 0x80882d
    ctx->pc = 0x18e66cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e670: 0xffbf0020
    ctx->pc = 0x18e670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18e674: 0xc063950
    ctx->pc = 0x18E674u;
    SET_GPR_U32(ctx, 31, 0x18E67Cu);
    ctx->pc = 0x18E678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18E540u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyGetNumSlFiles_0x18e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E67Cu; }
        else if (ctx->pc != 0x18E67Cu) { ctx->pc = 0x18E67Cu; }
    }
    if (ctx->pc != 0x18E67Cu) { return; }
    ctx->pc = 0x18E67Cu;
    // 0x18e67c: 0x202102a
    ctx->pc = 0x18e67cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x18e680: 0x1040000d
    ctx->pc = 0x18E680u;
    {
        const bool branch_taken_0x18e680 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18E684u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18e680) {
            ctx->pc = 0x18E6B8u;
            goto label_18e6b8;
        }
    }
    ctx->pc = 0x18E688u;
    // 0x18e688: 0x6010006
    ctx->pc = 0x18E688u;
    {
        const bool branch_taken_0x18e688 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x18E68Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18e688) {
            ctx->pc = 0x18E6A4u;
            goto label_18e6a4;
        }
    }
    ctx->pc = 0x18E690u;
    // 0x18e690: 0x3c04002c
    ctx->pc = 0x18e690u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18e694: 0xc063dda
    ctx->pc = 0x18E694u;
    SET_GPR_U32(ctx, 31, 0x18E69Cu);
    ctx->pc = 0x18E698u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955032));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E69Cu; }
        else if (ctx->pc != 0x18E69Cu) { ctx->pc = 0x18E69Cu; }
    }
    if (ctx->pc != 0x18E69Cu) { return; }
    ctx->pc = 0x18E69Cu;
    // 0x18e69c: 0x10000006
    ctx->pc = 0x18E69Cu;
    {
        const bool branch_taken_0x18e69c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18E6A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18e69c) {
            ctx->pc = 0x18E6B8u;
            goto label_18e6b8;
        }
    }
    ctx->pc = 0x18E6A4u;
label_18e6a4:
    // 0x18e6a4: 0xc0639bc
    ctx->pc = 0x18E6A4u;
    SET_GPR_U32(ctx, 31, 0x18E6ACu);
    ctx->pc = 0x18E6A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18E6F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFLSC_GetStmId_0x18e6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E6ACu; }
        else if (ctx->pc != 0x18E6ACu) { ctx->pc = 0x18E6ACu; }
    }
    if (ctx->pc != 0x18E6ACu) { return; }
    ctx->pc = 0x18E6ACu;
    // 0x18e6ac: 0x220202d
    ctx->pc = 0x18e6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e6b0: 0xc0639c4
    ctx->pc = 0x18E6B0u;
    SET_GPR_U32(ctx, 31, 0x18E6B8u);
    ctx->pc = 0x18E6B4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18E710u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFLSC_GetStmFname_0x18e710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E6B8u; }
        else if (ctx->pc != 0x18E6B8u) { ctx->pc = 0x18E6B8u; }
    }
    if (ctx->pc != 0x18E6B8u) { return; }
    ctx->pc = 0x18E6B8u;
label_18e6b8:
    // 0x18e6b8: 0xdfbf0020
    ctx->pc = 0x18e6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e6bc: 0xdfb10010
    ctx->pc = 0x18e6bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e6c0: 0xdfb00000
    ctx->pc = 0x18e6c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e6c4: 0x3e00008
    ctx->pc = 0x18E6C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E6C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E6A4u: goto label_18e6a4;
            case 0x18E6B8u: goto label_18e6b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E6CCu;
}
