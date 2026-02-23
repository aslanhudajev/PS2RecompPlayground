#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_ChkCondDfl
// Address: 0x19aaf8 - 0x19ab24
void sfply_ChkCondDfl_0x19aaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_ChkCondDfl");


    ctx->pc = 0x19aaf8u;

    // 0x19aaf8: 0x3c02002c
    ctx->pc = 0x19aaf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x19aafc: 0x3c035a5a
    ctx->pc = 0x19aafcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)23130 << 16));
    // 0x19ab00: 0x8c44d5b4
    ctx->pc = 0x19ab00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294956468)));
    // 0x19ab04: 0x34635a5a
    ctx->pc = 0x19ab04u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 23130));
    // 0x19ab08: 0x10830004
    ctx->pc = 0x19AB08u;
    {
        const bool branch_taken_0x19ab08 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x19AB0Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ab08) {
            ctx->pc = 0x19AB1Cu;
            goto label_19ab1c;
        }
    }
    ctx->pc = 0x19AB10u;
    // 0x19ab10: 0x3c05ff00
    ctx->pc = 0x19ab10u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19ab14: 0x8064ea0
    ctx->pc = 0x19AB14u;
    ctx->pc = 0x19AB18u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 513));
    ctx->pc = 0x193A80u;
    SFLIB_SetErr_0x193a80(rdram, ctx, runtime); return;
    ctx->pc = 0x19AB1Cu;
label_19ab1c:
    // 0x19ab1c: 0x3e00008
    ctx->pc = 0x19AB1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19AB1Cu: goto label_19ab1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19AB24u;
}
