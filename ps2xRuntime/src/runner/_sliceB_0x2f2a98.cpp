#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sliceB
// Address: 0x2f2a98 - 0x2f2b04
void _sliceB_0x2f2a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f2a98u;

    // 0x2f2a98: 0x27bdffe0
    ctx->pc = 0x2f2a98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f2a9c: 0x24040005
    ctx->pc = 0x2f2a9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f2aa0: 0xffb00000
    ctx->pc = 0x2f2aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f2aa4: 0xffbf0010
    ctx->pc = 0x2f2aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f2aa8: 0xc0bca32
    ctx->pc = 0x2F2AA8u;
    SET_GPR_U32(ctx, 31, 0x2F2AB0u);
    ctx->pc = 0x2F2AACu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2AB0u; }
    }
    if (ctx->pc != 0x2F2AB0u) { return; }
    ctx->pc = 0x2F2AB0u;
    // 0x2f2ab0: 0xae023280
    ctx->pc = 0x2f2ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12928), GPR_U32(ctx, 2));
    // 0x2f2ab4: 0xc0bca32
    ctx->pc = 0x2F2AB4u;
    SET_GPR_U32(ctx, 31, 0x2F2ABCu);
    ctx->pc = 0x2F2AB8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2ABCu; }
    }
    if (ctx->pc != 0x2F2ABCu) { return; }
    ctx->pc = 0x2F2ABCu;
    // 0x2f2abc: 0x1040000a
    ctx->pc = 0x2F2ABCu;
    {
        const bool branch_taken_0x2f2abc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F2AC0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f2abc) {
            ctx->pc = 0x2F2AE8u;
            goto label_2f2ae8;
        }
    }
    ctx->pc = 0x2F2AC4u;
    // 0x2f2ac4: 0xc0bca32
    ctx->pc = 0x2F2AC4u;
    SET_GPR_U32(ctx, 31, 0x2F2ACCu);
    ctx->pc = 0x2F2AC8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2ACCu; }
    }
    if (ctx->pc != 0x2F2ACCu) { return; }
    ctx->pc = 0x2F2ACCu;
    // 0x2f2acc: 0xae023900
    ctx->pc = 0x2f2accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14592), GPR_U32(ctx, 2));
    // 0x2f2ad0: 0xc0bc9ec
    ctx->pc = 0x2F2AD0u;
    SET_GPR_U32(ctx, 31, 0x2F2AD8u);
    ctx->pc = 0x2F2AD4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x2F27B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x2f27b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2AD8u; }
    }
    if (ctx->pc != 0x2F2AD8u) { return; }
    ctx->pc = 0x2F2AD8u;
    // 0x2f2ad8: 0xc0bcbf8
    ctx->pc = 0x2F2AD8u;
    SET_GPR_U32(ctx, 31, 0x2F2AE0u);
    ctx->pc = 0x2F2FE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _extrainfo_0x2f2fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2AE0u; }
    }
    if (ctx->pc != 0x2F2AE0u) { return; }
    ctx->pc = 0x2F2AE0u;
    // 0x2f2ae0: 0x10000004
    ctx->pc = 0x2F2AE0u;
    {
        const bool branch_taken_0x2f2ae0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F2AE4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2f2ae0) {
            ctx->pc = 0x2F2AF4u;
            goto label_2f2af4;
        }
    }
    ctx->pc = 0x2F2AE8u;
label_2f2ae8:
    // 0x2f2ae8: 0x3c02003a
    ctx->pc = 0x2f2ae8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f2aec: 0xac403900
    ctx->pc = 0x2f2aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14592), GPR_U32(ctx, 0));
    // 0x2f2af0: 0xdfbf0010
    ctx->pc = 0x2f2af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f2af4:
    // 0x2f2af4: 0x102d
    ctx->pc = 0x2f2af4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2af8: 0xdfb00000
    ctx->pc = 0x2f2af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2afc: 0x3e00008
    ctx->pc = 0x2F2AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2B00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F2AE8u: goto label_2f2ae8;
            case 0x2F2AF4u: goto label_2f2af4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F2B04u;
}
