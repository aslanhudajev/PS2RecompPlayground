#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: blocked07
// Address: 0x241198 - 0x241240
void blocked07_0x241198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x241198u;

    // 0x241198: 0x27bdffe0
    ctx->pc = 0x241198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24119c: 0xffbf0010
    ctx->pc = 0x24119cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2411a0: 0xffb00000
    ctx->pc = 0x2411a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2411a4: 0xa0382d
    ctx->pc = 0x2411a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2411a8: 0x240303b0
    ctx->pc = 0x2411a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x2411ac: 0x831818
    ctx->pc = 0x2411acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2411b0: 0x3c020033
    ctx->pc = 0x2411b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x2411b4: 0x2442dfd0
    ctx->pc = 0x2411b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x2411b8: 0x628021
    ctx->pc = 0x2411b8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2411bc: 0x8e020368
    ctx->pc = 0x2411bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x2411c0: 0x4420001
    ctx->pc = 0x2411C0u;
    {
        const bool branch_taken_0x2411c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2411c0) {
            ctx->pc = 0x2411C4u;
            SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->pc = 0x2411C8u;
            goto label_2411c8;
        }
    }
    ctx->pc = 0x2411C8u;
label_2411c8:
    // 0x2411c8: 0x28420003
    ctx->pc = 0x2411c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x2411cc: 0x10400008
    ctx->pc = 0x2411CCu;
    {
        const bool branch_taken_0x2411cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2411D0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2411cc) {
            ctx->pc = 0x2411F0u;
            goto label_2411f0;
        }
    }
    ctx->pc = 0x2411D4u;
    // 0x2411d4: 0x96020378
    ctx->pc = 0x2411d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
    // 0x2411d8: 0x24420001
    ctx->pc = 0x2411d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2411dc: 0xa6020378
    ctx->pc = 0x2411dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 2));
    // 0x2411e0: 0xc08efc2
    ctx->pc = 0x2411E0u;
    SET_GPR_U32(ctx, 31, 0x2411E8u);
    ctx->pc = 0x2411E4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeadEnd_0x23bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2411E8u; }
    }
    if (ctx->pc != 0x2411E8u) { return; }
    ctx->pc = 0x2411E8u;
    // 0x2411e8: 0x1000000a
    ctx->pc = 0x2411E8u;
    {
        const bool branch_taken_0x2411e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2411ECu;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
        if (branch_taken_0x2411e8) {
            ctx->pc = 0x241214u;
            goto label_241214;
        }
    }
    ctx->pc = 0x2411F0u;
label_2411f0:
    // 0x2411f0: 0xc08efc2
    ctx->pc = 0x2411F0u;
    SET_GPR_U32(ctx, 31, 0x2411F8u);
    ctx->pc = 0x23BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeadEnd_0x23bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2411F8u; }
    }
    if (ctx->pc != 0x2411F8u) { return; }
    ctx->pc = 0x2411F8u;
    // 0x2411f8: 0x3c02003c
    ctx->pc = 0x2411f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2411fc: 0xc4401c6c
    ctx->pc = 0x2411fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241200: 0xe6000260
    ctx->pc = 0x241200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x241204: 0xe6000258
    ctx->pc = 0x241204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x241208: 0xa6000378
    ctx->pc = 0x241208u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
    // 0x24120c: 0xae000368
    ctx->pc = 0x24120cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 0));
    // 0x241210: 0x86020378
    ctx->pc = 0x241210u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
label_241214:
    // 0x241214: 0x28420007
    ctx->pc = 0x241214u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 7));
    // 0x241218: 0x14400006
    ctx->pc = 0x241218u;
    {
        const bool branch_taken_0x241218 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24121Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x241218) {
            ctx->pc = 0x241234u;
            goto label_241234;
        }
    }
    ctx->pc = 0x241220u;
    // 0x241220: 0x8e020368
    ctx->pc = 0x241220u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x241224: 0x21023
    ctx->pc = 0x241224u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x241228: 0x21040
    ctx->pc = 0x241228u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x24122c: 0xae020368
    ctx->pc = 0x24122cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
    // 0x241230: 0xa6000378
    ctx->pc = 0x241230u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
label_241234:
    // 0x241234: 0xdfb00000
    ctx->pc = 0x241234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241238: 0x3e00008
    ctx->pc = 0x241238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24123Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2411C8u: goto label_2411c8;
            case 0x2411F0u: goto label_2411f0;
            case 0x241214u: goto label_241214;
            case 0x241234u: goto label_241234;
            default: break;
        }
        return;
    }
    ctx->pc = 0x241240u;
}
