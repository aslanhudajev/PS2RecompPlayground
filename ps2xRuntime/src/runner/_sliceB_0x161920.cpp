#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _sliceB
// Address: 0x161920 - 0x16198c
void _sliceB_0x161920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_sliceB");


    ctx->pc = 0x161920u;

    // 0x161920: 0x27bdffe0
    ctx->pc = 0x161920u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161924: 0x24040005
    ctx->pc = 0x161924u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x161928: 0xffb00000
    ctx->pc = 0x161928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16192c: 0xffbf0010
    ctx->pc = 0x16192cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x161930: 0xc0585d4
    ctx->pc = 0x161930u;
    SET_GPR_U32(ctx, 31, 0x161938u);
    ctx->pc = 0x161934u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161938u; }
        else if (ctx->pc != 0x161938u) { ctx->pc = 0x161938u; }
    }
    if (ctx->pc != 0x161938u) { return; }
    ctx->pc = 0x161938u;
    // 0x161938: 0x0
    ctx->pc = 0x161938u;
    // NOP
    // 0x16193c: 0xc0585d4
    ctx->pc = 0x16193Cu;
    SET_GPR_U32(ctx, 31, 0x161944u);
    ctx->pc = 0x161940u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161944u; }
        else if (ctx->pc != 0x161944u) { ctx->pc = 0x161944u; }
    }
    if (ctx->pc != 0x161944u) { return; }
    ctx->pc = 0x161944u;
    // 0x161944: 0x1040000a
    ctx->pc = 0x161944u;
    {
        const bool branch_taken_0x161944 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x161948u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x161944) {
            ctx->pc = 0x161970u;
            goto label_161970;
        }
    }
    ctx->pc = 0x16194Cu;
    // 0x16194c: 0xc0585d4
    ctx->pc = 0x16194Cu;
    SET_GPR_U32(ctx, 31, 0x161954u);
    ctx->pc = 0x161950u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161954u; }
        else if (ctx->pc != 0x161954u) { ctx->pc = 0x161954u; }
    }
    if (ctx->pc != 0x161954u) { return; }
    ctx->pc = 0x161954u;
    // 0x161954: 0x0
    ctx->pc = 0x161954u;
    // NOP
    // 0x161958: 0xc05858e
    ctx->pc = 0x161958u;
    SET_GPR_U32(ctx, 31, 0x161960u);
    ctx->pc = 0x16195Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x161638u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x161638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161960u; }
        else if (ctx->pc != 0x161960u) { ctx->pc = 0x161960u; }
    }
    if (ctx->pc != 0x161960u) { return; }
    ctx->pc = 0x161960u;
    // 0x161960: 0xc05879a
    ctx->pc = 0x161960u;
    SET_GPR_U32(ctx, 31, 0x161968u);
    ctx->pc = 0x161E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        _extrainfo_0x161e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161968u; }
        else if (ctx->pc != 0x161968u) { ctx->pc = 0x161968u; }
    }
    if (ctx->pc != 0x161968u) { return; }
    ctx->pc = 0x161968u;
    // 0x161968: 0x10000004
    ctx->pc = 0x161968u;
    {
        const bool branch_taken_0x161968 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16196Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x161968) {
            ctx->pc = 0x16197Cu;
            goto label_16197c;
        }
    }
    ctx->pc = 0x161970u;
label_161970:
    // 0x161970: 0x3c020023
    ctx->pc = 0x161970u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x161974: 0xac40ab00
    ctx->pc = 0x161974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945536), GPR_U32(ctx, 0));
    // 0x161978: 0xdfbf0010
    ctx->pc = 0x161978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16197c:
    // 0x16197c: 0x102d
    ctx->pc = 0x16197cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161980: 0xdfb00000
    ctx->pc = 0x161980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161984: 0x3e00008
    ctx->pc = 0x161984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161988u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161970u: goto label_161970;
            case 0x16197Cu: goto label_16197c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16198Cu;
}
