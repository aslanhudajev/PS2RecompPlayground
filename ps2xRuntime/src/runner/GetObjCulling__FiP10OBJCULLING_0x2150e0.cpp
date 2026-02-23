#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetObjCulling__FiP10OBJCULLING
// Address: 0x2150e0 - 0x215174
void GetObjCulling__FiP10OBJCULLING_0x2150e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetObjCulling__FiP10OBJCULLING");


    ctx->pc = 0x2150e0u;

    // 0x2150e0: 0x41c03
    ctx->pc = 0x2150e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 16));
    // 0x2150e4: 0x3063ffff
    ctx->pc = 0x2150e4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65535));
    // 0x2150e8: 0x33900
    ctx->pc = 0x2150e8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2150ec: 0x3c030050
    ctx->pc = 0x2150ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x2150f0: 0x2463ea24
    ctx->pc = 0x2150f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294961700));
    // 0x2150f4: 0x3086ffff
    ctx->pc = 0x2150f4u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 4), 65535));
    // 0x2150f8: 0x671821
    ctx->pc = 0x2150f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2150fc: 0x8c640000
    ctx->pc = 0x2150fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x215100: 0x61840
    ctx->pc = 0x215100u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x215104: 0x661821
    ctx->pc = 0x215104u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x215108: 0x33080
    ctx->pc = 0x215108u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21510c: 0x3c030050
    ctx->pc = 0x21510cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x215110: 0x2463ea20
    ctx->pc = 0x215110u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294961696));
    // 0x215114: 0x863021
    ctx->pc = 0x215114u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x215118: 0x671821
    ctx->pc = 0x215118u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x21511c: 0x8c640000
    ctx->pc = 0x21511cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x215120: 0x3c038000
    ctx->pc = 0x215120u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x215124: 0x831824
    ctx->pc = 0x215124u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x215128: 0x14600007
    ctx->pc = 0x215128u;
    {
        const bool branch_taken_0x215128 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x215128) {
            ctx->pc = 0x215148u;
            goto label_215148;
        }
    }
    ctx->pc = 0x215130u;
    // 0x215130: 0xaca00000
    ctx->pc = 0x215130u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x215134: 0xaca00004
    ctx->pc = 0x215134u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x215138: 0xaca00008
    ctx->pc = 0x215138u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x21513c: 0x3c03bf80
    ctx->pc = 0x21513cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49024 << 16));
    // 0x215140: 0x1000000a
    ctx->pc = 0x215140u;
    {
        const bool branch_taken_0x215140 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x215144u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        if (branch_taken_0x215140) {
            ctx->pc = 0x21516Cu;
            goto label_21516c;
        }
    }
    ctx->pc = 0x215148u;
label_215148:
    // 0x215148: 0x8cc30000
    ctx->pc = 0x215148u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21514c: 0xc460000c
    ctx->pc = 0x21514cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215150: 0xe4a00000
    ctx->pc = 0x215150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x215154: 0xc4600010
    ctx->pc = 0x215154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215158: 0xe4a00004
    ctx->pc = 0x215158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x21515c: 0xc4600014
    ctx->pc = 0x21515cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215160: 0xe4a00008
    ctx->pc = 0x215160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x215164: 0xc4600018
    ctx->pc = 0x215164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215168: 0xe4a0000c
    ctx->pc = 0x215168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_21516c:
    // 0x21516c: 0x3e00008
    ctx->pc = 0x21516Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215148u: goto label_215148;
            case 0x21516Cu: goto label_21516c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215174u;
}
