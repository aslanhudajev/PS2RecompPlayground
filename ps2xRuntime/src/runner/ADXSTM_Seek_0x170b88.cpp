#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTM_Seek
// Address: 0x170b88 - 0x170bcc
void ADXSTM_Seek_0x170b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTM_Seek");


    ctx->pc = 0x170b88u;

    // 0x170b88: 0x27bdffe0
    ctx->pc = 0x170b88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170b8c: 0x302d
    ctx->pc = 0x170b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b90: 0xffb00000
    ctx->pc = 0x170b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170b94: 0xffbf0010
    ctx->pc = 0x170b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170b98: 0x80802d
    ctx->pc = 0x170b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b9c: 0x8e020010
    ctx->pc = 0x170b9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x170ba0: 0x8e040008
    ctx->pc = 0x170ba0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x170ba4: 0xc05d33c
    ctx->pc = 0x170BA4u;
    SET_GPR_U32(ctx, 31, 0x170BACu);
    ctx->pc = 0x170BA8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->pc = 0x174CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsSeek_0x174cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170BACu; }
        else if (ctx->pc != 0x170BACu) { ctx->pc = 0x170BACu; }
    }
    if (ctx->pc != 0x170BACu) { return; }
    ctx->pc = 0x170BACu;
    // 0x170bac: 0xc05d322
    ctx->pc = 0x170BACu;
    SET_GPR_U32(ctx, 31, 0x170BB4u);
    ctx->pc = 0x170BB0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x174C88u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsTell_0x174c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170BB4u; }
        else if (ctx->pc != 0x170BB4u) { ctx->pc = 0x170BB4u; }
    }
    if (ctx->pc != 0x170BB4u) { return; }
    ctx->pc = 0x170BB4u;
    // 0x170bb4: 0x8e030010
    ctx->pc = 0x170bb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x170bb8: 0xdfbf0010
    ctx->pc = 0x170bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170bbc: 0xdfb00000
    ctx->pc = 0x170bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170bc0: 0x431023
    ctx->pc = 0x170bc0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170bc4: 0x3e00008
    ctx->pc = 0x170BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170BC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170BCCu;
}
