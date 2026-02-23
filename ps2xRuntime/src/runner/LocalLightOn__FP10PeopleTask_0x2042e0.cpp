#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LocalLightOn__FP10PeopleTask
// Address: 0x2042e0 - 0x204398
void LocalLightOn__FP10PeopleTask_0x2042e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LocalLightOn__FP10PeopleTask");


    ctx->pc = 0x2042e0u;

    // 0x2042e0: 0x27bdffe0
    ctx->pc = 0x2042e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2042e4: 0x7fbf0010
    ctx->pc = 0x2042e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2042e8: 0x7fb00000
    ctx->pc = 0x2042e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2042ec: 0x70808628
    ctx->pc = 0x2042ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2042f0: 0xc07c2dc
    ctx->pc = 0x2042F0u;
    SET_GPR_U32(ctx, 31, 0x2042F8u);
    ctx->pc = 0x2042F4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    ctx->pc = 0x1F0B70u;
    {
        const uint32_t __entryPc = ctx->pc;
        PushLight__13LightCtrlTaskFv_0x1f0b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2042F8u; }
        else if (ctx->pc != 0x2042F8u) { ctx->pc = 0x2042F8u; }
    }
    if (ctx->pc != 0x2042F8u) { return; }
    ctx->pc = 0x2042F8u;
    // 0x2042f8: 0x8f878d40
    ctx->pc = 0x2042f8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x2042fc: 0x3c010050
    ctx->pc = 0x2042fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x204300: 0x8024e4f6
    ctx->pc = 0x204300u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960374)));
    // 0x204304: 0x24030001
    ctx->pc = 0x204304u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x204308: 0x8ce6000c
    ctx->pc = 0x204308u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x20430c: 0x62840
    ctx->pc = 0x20430cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 1));
    // 0x204310: 0xa62821
    ctx->pc = 0x204310u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x204314: 0x528c0
    ctx->pc = 0x204314u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x204318: 0xa62823
    ctx->pc = 0x204318u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20431c: 0x52880
    ctx->pc = 0x20431cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x204320: 0xe52821
    ctx->pc = 0x204320u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x204324: 0x10830018
    ctx->pc = 0x204324u;
    {
        const bool branch_taken_0x204324 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x204328u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
        if (branch_taken_0x204324) {
            ctx->pc = 0x204388u;
            goto label_204388;
        }
    }
    ctx->pc = 0x20432Cu;
    // 0x20432c: 0x3c010050
    ctx->pc = 0x20432cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x204330: 0x8424e504
    ctx->pc = 0x204330u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x204334: 0x2403000f
    ctx->pc = 0x204334u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x204338: 0x10830013
    ctx->pc = 0x204338u;
    {
        const bool branch_taken_0x204338 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x204338) {
            ctx->pc = 0x204388u;
            goto label_204388;
        }
    }
    ctx->pc = 0x204340u;
    // 0x204340: 0xc6001d88
    ctx->pc = 0x204340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204344: 0xe4a00034
    ctx->pc = 0x204344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x204348: 0xc6001d8c
    ctx->pc = 0x204348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20434c: 0xe4a00038
    ctx->pc = 0x20434cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x204350: 0xc6001d90
    ctx->pc = 0x204350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204354: 0xe4a0003c
    ctx->pc = 0x204354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x204358: 0xc6001d7c
    ctx->pc = 0x204358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20435c: 0xe4a0001c
    ctx->pc = 0x20435cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x204360: 0xc6001d80
    ctx->pc = 0x204360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204364: 0xe4a00020
    ctx->pc = 0x204364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x204368: 0xc6001d84
    ctx->pc = 0x204368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20436c: 0xe4a00024
    ctx->pc = 0x20436cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x204370: 0x8e021d94
    ctx->pc = 0x204370u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7572)));
    // 0x204374: 0xaca20048
    ctx->pc = 0x204374u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 2));
    // 0x204378: 0x8e021d98
    ctx->pc = 0x204378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7576)));
    // 0x20437c: 0xaca2004c
    ctx->pc = 0x20437cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 2));
    // 0x204380: 0xc07c2c4
    ctx->pc = 0x204380u;
    SET_GPR_U32(ctx, 31, 0x204388u);
    ctx->pc = 0x204384u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    ctx->pc = 0x1F0B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ImmediateExe__13LightCtrlTaskFv_0x1f0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204388u; }
        else if (ctx->pc != 0x204388u) { ctx->pc = 0x204388u; }
    }
    if (ctx->pc != 0x204388u) { return; }
    ctx->pc = 0x204388u;
label_204388:
    // 0x204388: 0x7bbf0010
    ctx->pc = 0x204388u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20438c: 0x7bb00000
    ctx->pc = 0x20438cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204390: 0x3e00008
    ctx->pc = 0x204390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204394u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204388u: goto label_204388;
            default: break;
        }
        return;
    }
    ctx->pc = 0x204398u;
}
