#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _quantMatrixExtension
// Address: 0x2f31e0 - 0x2f328c
void _quantMatrixExtension_0x2f31e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f31e0u;

    // 0x2f31e0: 0x27bdffe0
    ctx->pc = 0x2f31e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f31e4: 0x24040001
    ctx->pc = 0x2f31e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f31e8: 0xffb00000
    ctx->pc = 0x2f31e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f31ec: 0xffbf0010
    ctx->pc = 0x2f31ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f31f0: 0xc0bca32
    ctx->pc = 0x2F31F0u;
    SET_GPR_U32(ctx, 31, 0x2F31F8u);
    ctx->pc = 0x2F31F4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F31F8u; }
    }
    if (ctx->pc != 0x2F31F8u) { return; }
    ctx->pc = 0x2F31F8u;
    // 0x2f31f8: 0x10400007
    ctx->pc = 0x2F31F8u;
    {
        const bool branch_taken_0x2f31f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F31FCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 14560), GPR_U32(ctx, 2));
        if (branch_taken_0x2f31f8) {
            ctx->pc = 0x2F3218u;
            goto label_2f3218;
        }
    }
    ctx->pc = 0x2F3200u;
    // 0x2f3200: 0xc0bc8da
    ctx->pc = 0x2F3200u;
    SET_GPR_U32(ctx, 31, 0x2F3208u);
    ctx->pc = 0x2F2368u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x2f2368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3208u; }
    }
    if (ctx->pc != 0x2F3208u) { return; }
    ctx->pc = 0x2F3208u;
    // 0x2f3208: 0xc0bc8ce
    ctx->pc = 0x2F3208u;
    SET_GPR_U32(ctx, 31, 0x2F3210u);
    ctx->pc = 0x2F320Cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)20480 << 16));
    ctx->pc = 0x2F2338u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x2f2338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3210u; }
    }
    if (ctx->pc != 0x2F3210u) { return; }
    ctx->pc = 0x2F3210u;
    // 0x2f3210: 0xc0bc8da
    ctx->pc = 0x2F3210u;
    SET_GPR_U32(ctx, 31, 0x2F3218u);
    ctx->pc = 0x2F2368u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x2f2368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3218u; }
    }
    if (ctx->pc != 0x2F3218u) { return; }
    ctx->pc = 0x2F3218u;
label_2f3218:
    // 0x2f3218: 0x24040001
    ctx->pc = 0x2f3218u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f321c: 0xc0bca32
    ctx->pc = 0x2F321Cu;
    SET_GPR_U32(ctx, 31, 0x2F3224u);
    ctx->pc = 0x2F3220u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3224u; }
    }
    if (ctx->pc != 0x2F3224u) { return; }
    ctx->pc = 0x2F3224u;
    // 0x2f3224: 0x10400007
    ctx->pc = 0x2F3224u;
    {
        const bool branch_taken_0x2f3224 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3228u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 14564), GPR_U32(ctx, 2));
        if (branch_taken_0x2f3224) {
            ctx->pc = 0x2F3244u;
            goto label_2f3244;
        }
    }
    ctx->pc = 0x2F322Cu;
    // 0x2f322c: 0xc0bc8da
    ctx->pc = 0x2F322Cu;
    SET_GPR_U32(ctx, 31, 0x2F3234u);
    ctx->pc = 0x2F2368u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x2f2368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3234u; }
    }
    if (ctx->pc != 0x2F3234u) { return; }
    ctx->pc = 0x2F3234u;
    // 0x2f3234: 0xc0bc8ce
    ctx->pc = 0x2F3234u;
    SET_GPR_U32(ctx, 31, 0x2F323Cu);
    ctx->pc = 0x2F3238u;
    SET_GPR_U32(ctx, 4, ((uint32_t)22528 << 16));
    ctx->pc = 0x2F2338u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x2f2338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F323Cu; }
    }
    if (ctx->pc != 0x2F323Cu) { return; }
    ctx->pc = 0x2F323Cu;
    // 0x2f323c: 0xc0bc8da
    ctx->pc = 0x2F323Cu;
    SET_GPR_U32(ctx, 31, 0x2F3244u);
    ctx->pc = 0x2F2368u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x2f2368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3244u; }
    }
    if (ctx->pc != 0x2F3244u) { return; }
    ctx->pc = 0x2F3244u;
label_2f3244:
    // 0x2f3244: 0xc0bca32
    ctx->pc = 0x2F3244u;
    SET_GPR_U32(ctx, 31, 0x2F324Cu);
    ctx->pc = 0x2F3248u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F324Cu; }
    }
    if (ctx->pc != 0x2F324Cu) { return; }
    ctx->pc = 0x2F324Cu;
    // 0x2f324c: 0x10400003
    ctx->pc = 0x2F324Cu;
    {
        const bool branch_taken_0x2f324c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3250u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x2f324c) {
            ctx->pc = 0x2F325Cu;
            goto label_2f325c;
        }
    }
    ctx->pc = 0x2F3254u;
    // 0x2f3254: 0xc0bba56
    ctx->pc = 0x2F3254u;
    SET_GPR_U32(ctx, 31, 0x2F325Cu);
    ctx->pc = 0x2F3258u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942896));
    ctx->pc = 0x2EE958u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x2ee958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F325Cu; }
    }
    if (ctx->pc != 0x2F325Cu) { return; }
    ctx->pc = 0x2F325Cu;
label_2f325c:
    // 0x2f325c: 0xc0bca32
    ctx->pc = 0x2F325Cu;
    SET_GPR_U32(ctx, 31, 0x2F3264u);
    ctx->pc = 0x2F3260u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3264u; }
    }
    if (ctx->pc != 0x2F3264u) { return; }
    ctx->pc = 0x2F3264u;
    // 0x2f3264: 0x10400006
    ctx->pc = 0x2F3264u;
    {
        const bool branch_taken_0x2f3264 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3268u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2f3264) {
            ctx->pc = 0x2F3280u;
            goto label_2f3280;
        }
    }
    ctx->pc = 0x2F326Cu;
    // 0x2f326c: 0x3c04003c
    ctx->pc = 0x2f326cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2f3270: 0xdfb00000
    ctx->pc = 0x2f3270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3274: 0x2484a0d8
    ctx->pc = 0x2f3274u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942936));
    // 0x2f3278: 0x80bba56
    ctx->pc = 0x2F3278u;
    ctx->pc = 0x2F327Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2EE958u;
    ps2__Error_0x2ee958(rdram, ctx, runtime); return;
    ctx->pc = 0x2F3280u;
label_2f3280:
    // 0x2f3280: 0xdfb00000
    ctx->pc = 0x2f3280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3284: 0x3e00008
    ctx->pc = 0x2F3284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3288u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F3218u: goto label_2f3218;
            case 0x2F3244u: goto label_2f3244;
            case 0x2F325Cu: goto label_2f325c;
            case 0x2F3280u: goto label_2f3280;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F328Cu;
}
