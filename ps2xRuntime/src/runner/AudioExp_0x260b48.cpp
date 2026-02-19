#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioExp
// Address: 0x260b48 - 0x260bd4
void AudioExp_0x260b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260b48u;

    // 0x260b48: 0x27bdffe0
    ctx->pc = 0x260b48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x260b4c: 0xffbf0010
    ctx->pc = 0x260b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x260b50: 0xffb00000
    ctx->pc = 0x260b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x260b54: 0x28c20063
    ctx->pc = 0x260b54u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 99));
    // 0x260b58: 0x14400004
    ctx->pc = 0x260B58u;
    {
        const bool branch_taken_0x260b58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x260B5Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x260b58) {
            ctx->pc = 0x260B6Cu;
            goto label_260b6c;
        }
    }
    ctx->pc = 0x260B60u;
    // 0x260b60: 0x3c100001
    ctx->pc = 0x260b60u;
    SET_GPR_U32(ctx, 16, ((uint32_t)1 << 16));
    // 0x260b64: 0x1000000f
    ctx->pc = 0x260B64u;
    {
        const bool branch_taken_0x260b64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x260B68u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 63));
        if (branch_taken_0x260b64) {
            ctx->pc = 0x260BA4u;
            goto label_260ba4;
        }
    }
    ctx->pc = 0x260B6Cu;
label_260b6c:
    // 0x260b6c: 0x3c040034
    ctx->pc = 0x260b6cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x260b70: 0x2484de38
    ctx->pc = 0x260b70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958648));
    // 0x260b74: 0x2402000a
    ctx->pc = 0x260b74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x260b78: 0xc2001a
    ctx->pc = 0x260b78u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x260b7c: 0x1812
    ctx->pc = 0x260b7cu;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x260b80: 0x50400001
    ctx->pc = 0x260B80u;
    {
        const bool branch_taken_0x260b80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x260b80) {
            ctx->pc = 0x260B84u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x260B88u;
            goto label_260b88;
        }
    }
    ctx->pc = 0x260B88u;
label_260b88:
    // 0x260b88: 0x2463ffff
    ctx->pc = 0x260b88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x260b8c: 0x31880
    ctx->pc = 0x260b8cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x260b90: 0x24020024
    ctx->pc = 0x260b90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 36));
    // 0x260b94: 0xa21018
    ctx->pc = 0x260b94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x260b98: 0x621821
    ctx->pc = 0x260b98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x260b9c: 0x641821
    ctx->pc = 0x260b9cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x260ba0: 0x8c700000
    ctx->pc = 0x260ba0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_260ba4:
    // 0x260ba4: 0x3c0140a0
    ctx->pc = 0x260ba4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x260ba8: 0x44816000
    ctx->pc = 0x260ba8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x260bac: 0x2404ffff
    ctx->pc = 0x260bacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x260bb0: 0xe0282d
    ctx->pc = 0x260bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260bb4: 0x200302d
    ctx->pc = 0x260bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260bb8: 0xc097672
    ctx->pc = 0x260BB8u;
    SET_GPR_U32(ctx, 31, 0x260BC0u);
    ctx->pc = 0x260BBCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x25D9C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioWithName_0x25d9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260BC0u; }
    }
    if (ctx->pc != 0x260BC0u) { return; }
    ctx->pc = 0x260BC0u;
    // 0x260bc0: 0x200102d
    ctx->pc = 0x260bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260bc4: 0xdfbf0010
    ctx->pc = 0x260bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260bc8: 0xdfb00000
    ctx->pc = 0x260bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260bcc: 0x3e00008
    ctx->pc = 0x260BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260BD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x260B6Cu: goto label_260b6c;
            case 0x260B88u: goto label_260b88;
            case 0x260BA4u: goto label_260ba4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x260BD4u;
}
