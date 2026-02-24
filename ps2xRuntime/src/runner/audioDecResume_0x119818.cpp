#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecResume
// Address: 0x119818 - 0x119888
void audioDecResume_0x119818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119818u;

    // 0x119818: 0x27bdffe0
    ctx->pc = 0x119818u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11981c: 0xffb00000
    ctx->pc = 0x11981cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119820: 0x80802d
    ctx->pc = 0x119820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119824: 0xffbf0010
    ctx->pc = 0x119824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x119828: 0xc0467da
    ctx->pc = 0x119828u;
    SET_GPR_U32(ctx, 31, 0x119830u);
    ctx->pc = 0x11982Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32767));
    ctx->pc = 0x119F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeInputVolume_0x119f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119830u; }
    }
    if (ctx->pc != 0x119830u) { return; }
    ctx->pc = 0x119830u;
    // 0x119830: 0x8e030048
    ctx->pc = 0x119830u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x119834: 0x2402ffff
    ctx->pc = 0x119834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x119838: 0x8e080044
    ctx->pc = 0x119838u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x11983c: 0x24040001
    ctx->pc = 0x11983cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x119840: 0x43102a
    ctx->pc = 0x119840u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x119844: 0x246903ff
    ctx->pc = 0x119844u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 3), 1023));
    // 0x119848: 0x8e0a0050
    ctx->pc = 0x119848u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x11984c: 0x62480b
    ctx->pc = 0x11984cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 3));
    // 0x119850: 0x94a83
    ctx->pc = 0x119850u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 10));
    // 0x119854: 0x340580e0
    ctx->pc = 0x119854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)32992);
    // 0x119858: 0x94a80
    ctx->pc = 0x119858u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 10));
    // 0x11985c: 0x10a5021
    ctx->pc = 0x11985cu;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x119860: 0x302d
    ctx->pc = 0x119860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119864: 0xc045c80
    ctx->pc = 0x119864u;
    SET_GPR_U32(ctx, 31, 0x11986Cu);
    ctx->pc = 0x119868u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 19));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11986Cu; }
    }
    if (ctx->pc != 0x11986Cu) { return; }
    ctx->pc = 0x11986Cu;
    // 0x11986c: 0x24030002
    ctx->pc = 0x11986cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x119870: 0xdfbf0010
    ctx->pc = 0x119870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119874: 0xae030000
    ctx->pc = 0x119874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x119878: 0x24020001
    ctx->pc = 0x119878u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11987c: 0xdfb00000
    ctx->pc = 0x11987cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119880: 0x3e00008
    ctx->pc = 0x119880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119884u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x119888u;
}
