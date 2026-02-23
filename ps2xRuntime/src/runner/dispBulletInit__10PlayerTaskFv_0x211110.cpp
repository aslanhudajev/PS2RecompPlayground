#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dispBulletInit__10PlayerTaskFv
// Address: 0x211110 - 0x21118c
void dispBulletInit__10PlayerTaskFv_0x211110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dispBulletInit__10PlayerTaskFv");


    ctx->pc = 0x211110u;

    // 0x211110: 0x8c861cb8
    ctx->pc = 0x211110u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 7352)));
    // 0x211114: 0x3c030052
    ctx->pc = 0x211114u;
    SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
    // 0x211118: 0x70003e28
    ctx->pc = 0x211118u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21111c: 0x628c0
    ctx->pc = 0x21111cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 3));
    // 0x211120: 0xa63021
    ctx->pc = 0x211120u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x211124: 0x628c0
    ctx->pc = 0x211124u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 3));
    // 0x211128: 0xc52821
    ctx->pc = 0x211128u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x21112c: 0x2464c910
    ctx->pc = 0x21112cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294953232));
    // 0x211130: 0x52880
    ctx->pc = 0x211130u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x211134: 0x852821
    ctx->pc = 0x211134u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x211138: 0x62080
    ctx->pc = 0x211138u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 6), 2));
    // 0x21113c: 0x3c030052
    ctx->pc = 0x21113cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)82 << 16));
    // 0x211140: 0x862023
    ctx->pc = 0x211140u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x211144: 0x2463c830
    ctx->pc = 0x211144u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953008));
    // 0x211148: 0x42080
    ctx->pc = 0x211148u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x21114c: 0x642021
    ctx->pc = 0x21114cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_211150:
    // 0x211150: 0xc4800000
    ctx->pc = 0x211150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211154: 0x24e70001
    ctx->pc = 0x211154u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x211158: 0x28e30009
    ctx->pc = 0x211158u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), 9));
    // 0x21115c: 0xe4a00000
    ctx->pc = 0x21115cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x211160: 0xc4800004
    ctx->pc = 0x211160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211164: 0xe4a00004
    ctx->pc = 0x211164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x211168: 0xc4800008
    ctx->pc = 0x211168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21116c: 0xe4a00008
    ctx->pc = 0x21116cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x211170: 0xaca00018
    ctx->pc = 0x211170u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x211174: 0xaca0001c
    ctx->pc = 0x211174u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x211178: 0x24a50024
    ctx->pc = 0x211178u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 36));
    // 0x21117c: 0x1460fff4
    ctx->pc = 0x21117Cu;
    {
        const bool branch_taken_0x21117c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x211180u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12));
        if (branch_taken_0x21117c) {
            ctx->pc = 0x211150u;
            goto label_211150;
        }
    }
    ctx->pc = 0x211184u;
    // 0x211184: 0x3e00008
    ctx->pc = 0x211184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211150u: goto label_211150;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21118Cu;
}
