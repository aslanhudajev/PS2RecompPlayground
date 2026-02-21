#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPolyInstUpdateVerts
// Address: 0x2cef60 - 0x2cefc0
void MBPolyInstUpdateVerts_0x2cef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cef60u;

    // 0x2cef60: 0xc0502d
    ctx->pc = 0x2cef60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cef64: 0x8c860014
    ctx->pc = 0x2cef64u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2cef68: 0x11400013
    ctx->pc = 0x2CEF68u;
    {
        const bool branch_taken_0x2cef68 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CEF6Cu;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
        if (branch_taken_0x2cef68) {
            ctx->pc = 0x2CEFB8u;
            goto label_2cefb8;
        }
    }
    ctx->pc = 0x2CEF70u;
    // 0x2cef70: 0x18a00011
    ctx->pc = 0x2CEF70u;
    {
        const bool branch_taken_0x2cef70 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2CEF74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cef70) {
            ctx->pc = 0x2CEFB8u;
            goto label_2cefb8;
        }
    }
    ctx->pc = 0x2CEF78u;
    // 0x2cef78: 0x2408000c
    ctx->pc = 0x2cef78u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cef7c: 0x24070001
    ctx->pc = 0x2cef7cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_2cef80:
    // 0x2cef80: 0x41940
    ctx->pc = 0x2cef80u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 5));
    // 0x2cef84: 0x661821
    ctx->pc = 0x2cef84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2cef88: 0x884818
    ctx->pc = 0x2cef88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2cef8c: 0x12a1021
    ctx->pc = 0x2cef8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2cef90: 0xc4400000
    ctx->pc = 0x2cef90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cef94: 0xe4600000
    ctx->pc = 0x2cef94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2cef98: 0xc4400004
    ctx->pc = 0x2cef98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cef9c: 0xe4600004
    ctx->pc = 0x2cef9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2cefa0: 0xc4400008
    ctx->pc = 0x2cefa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cefa4: 0xe4600008
    ctx->pc = 0x2cefa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2cefa8: 0x24840001
    ctx->pc = 0x2cefa8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2cefac: 0x85102a
    ctx->pc = 0x2cefacu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 5)));
    // 0x2cefb0: 0x1440fff3
    ctx->pc = 0x2CEFB0u;
    {
        const bool branch_taken_0x2cefb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CEFB4u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 7));
        if (branch_taken_0x2cefb0) {
            ctx->pc = 0x2CEF80u;
            goto label_2cef80;
        }
    }
    ctx->pc = 0x2CEFB8u;
label_2cefb8:
    // 0x2cefb8: 0x3e00008
    ctx->pc = 0x2CEFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CEF80u: goto label_2cef80;
            case 0x2CEFB8u: goto label_2cefb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CEFC0u;
}
