#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: preMove__6CChainFv
// Address: 0x2006e0 - 0x20079c
void preMove__6CChainFv_0x2006e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("preMove__6CChainFv");


    ctx->pc = 0x2006e0u;

    // 0x2006e0: 0x8c830080
    ctx->pc = 0x2006e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2006e4: 0x10600011
    ctx->pc = 0x2006E4u;
    {
        const bool branch_taken_0x2006e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2006e4) {
            ctx->pc = 0x20072Cu;
            goto label_20072c;
        }
    }
    ctx->pc = 0x2006ECu;
    // 0x2006ec: 0xc4810004
    ctx->pc = 0x2006ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2006f0: 0xc480007c
    ctx->pc = 0x2006f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2006f4: 0x46000836
    ctx->pc = 0x2006f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2006f8: 0x0
    ctx->pc = 0x2006f8u;
    // NOP
    // 0x2006fc: 0x4500000b
    ctx->pc = 0x2006FCu;
    {
        const bool branch_taken_0x2006fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2006fc) {
            ctx->pc = 0x20072Cu;
            goto label_20072c;
        }
    }
    ctx->pc = 0x200704u;
    // 0x200704: 0xc4800018
    ctx->pc = 0x200704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200708: 0x3c033dcc
    ctx->pc = 0x200708u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15820 << 16));
    // 0x20070c: 0x3463cccd
    ctx->pc = 0x20070cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x200710: 0x44830800
    ctx->pc = 0x200710u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x200714: 0x0
    ctx->pc = 0x200714u;
    // NOP
    // 0x200718: 0x46010002
    ctx->pc = 0x200718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20071c: 0xe4800018
    ctx->pc = 0x20071cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x200720: 0xc4800020
    ctx->pc = 0x200720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200724: 0x46010002
    ctx->pc = 0x200724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x200728: 0xe4800020
    ctx->pc = 0x200728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_20072c:
    // 0x20072c: 0xc4810018
    ctx->pc = 0x20072cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200730: 0xc4800000
    ctx->pc = 0x200730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200734: 0x46010000
    ctx->pc = 0x200734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x200738: 0xe4800000
    ctx->pc = 0x200738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x20073c: 0xc481001c
    ctx->pc = 0x20073cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200740: 0xc4800004
    ctx->pc = 0x200740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200744: 0x46010000
    ctx->pc = 0x200744u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x200748: 0xe4800004
    ctx->pc = 0x200748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x20074c: 0xc4810020
    ctx->pc = 0x20074cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200750: 0xc4800008
    ctx->pc = 0x200750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200754: 0x46010000
    ctx->pc = 0x200754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x200758: 0xe4800008
    ctx->pc = 0x200758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x20075c: 0xc4810068
    ctx->pc = 0x20075cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200760: 0xc4800004
    ctx->pc = 0x200760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200764: 0x46010001
    ctx->pc = 0x200764u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x200768: 0xe4800004
    ctx->pc = 0x200768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x20076c: 0x8c830080
    ctx->pc = 0x20076cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x200770: 0x10600008
    ctx->pc = 0x200770u;
    {
        const bool branch_taken_0x200770 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x200770) {
            ctx->pc = 0x200794u;
            goto label_200794;
        }
    }
    ctx->pc = 0x200778u;
    // 0x200778: 0xc4800004
    ctx->pc = 0x200778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20077c: 0xc481007c
    ctx->pc = 0x20077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200780: 0x46010034
    ctx->pc = 0x200780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200784: 0x0
    ctx->pc = 0x200784u;
    // NOP
    // 0x200788: 0x45000002
    ctx->pc = 0x200788u;
    {
        const bool branch_taken_0x200788 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x200788) {
            ctx->pc = 0x200794u;
            goto label_200794;
        }
    }
    ctx->pc = 0x200790u;
    // 0x200790: 0xe4810004
    ctx->pc = 0x200790u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_200794:
    // 0x200794: 0x3e00008
    ctx->pc = 0x200794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20072Cu: goto label_20072c;
            case 0x200794u: goto label_200794;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20079Cu;
}
