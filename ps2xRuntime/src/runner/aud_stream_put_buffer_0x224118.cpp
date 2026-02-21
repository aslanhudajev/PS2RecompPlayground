#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: aud_stream_put_buffer
// Address: 0x224118 - 0x224194
void aud_stream_put_buffer_0x224118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x224118u;

    // 0x224118: 0x27bdffc0
    ctx->pc = 0x224118u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22411c: 0xffbf0030
    ctx->pc = 0x22411cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x224120: 0xffb20020
    ctx->pc = 0x224120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x224124: 0xffb10010
    ctx->pc = 0x224124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x224128: 0xffb00000
    ctx->pc = 0x224128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22412c: 0x80802d
    ctx->pc = 0x22412cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224130: 0xa0882d
    ctx->pc = 0x224130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224134: 0xc088cb6
    ctx->pc = 0x224134u;
    SET_GPR_U32(ctx, 31, 0x22413Cu);
    ctx->pc = 0x224138u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2232D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        wipe_tx_buf_0x2232d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22413Cu; }
    }
    if (ctx->pc != 0x22413Cu) { return; }
    ctx->pc = 0x22413Cu;
    // 0x22413c: 0x3c02003c
    ctx->pc = 0x22413cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x224140: 0x24430ac0
    ctx->pc = 0x224140u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2752));
    // 0x224144: 0xac500ac0
    ctx->pc = 0x224144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2752), GPR_U32(ctx, 16));
    // 0x224148: 0xac710004
    ctx->pc = 0x224148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x22414c: 0x3c02003c
    ctx->pc = 0x22414cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x224150: 0x8c420f68
    ctx->pc = 0x224150u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 3944)));
    // 0x224154: 0x10400003
    ctx->pc = 0x224154u;
    {
        const bool branch_taken_0x224154 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x224158u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 23));
        if (branch_taken_0x224154) {
            ctx->pc = 0x224164u;
            goto label_224164;
        }
    }
    ctx->pc = 0x22415Cu;
    // 0x22415c: 0x10000006
    ctx->pc = 0x22415Cu;
    {
        const bool branch_taken_0x22415c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224160u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22415c) {
            ctx->pc = 0x224178u;
            goto label_224178;
        }
    }
    ctx->pc = 0x224164u;
label_224164:
    // 0x224164: 0xc088ce8
    ctx->pc = 0x224164u;
    SET_GPR_U32(ctx, 31, 0x22416Cu);
    ctx->pc = 0x224168u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2233A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audIOP_0x2233a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22416Cu; }
    }
    if (ctx->pc != 0x22416Cu) { return; }
    ctx->pc = 0x22416Cu;
    // 0x22416c: 0x4400002
    ctx->pc = 0x22416Cu;
    {
        const bool branch_taken_0x22416c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x224170u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x22416c) {
            ctx->pc = 0x224178u;
            goto label_224178;
        }
    }
    ctx->pc = 0x224174u;
    // 0x224174: 0x8c520b00
    ctx->pc = 0x224174u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 2816)));
label_224178:
    // 0x224178: 0x240102d
    ctx->pc = 0x224178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22417c: 0xdfbf0030
    ctx->pc = 0x22417cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x224180: 0xdfb20020
    ctx->pc = 0x224180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224184: 0xdfb10010
    ctx->pc = 0x224184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224188: 0xdfb00000
    ctx->pc = 0x224188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22418c: 0x3e00008
    ctx->pc = 0x22418Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224190u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224164u: goto label_224164;
            case 0x224178u: goto label_224178;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224194u;
}
