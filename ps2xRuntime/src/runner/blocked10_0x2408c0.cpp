#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: blocked10
// Address: 0x2408c0 - 0x240968
void blocked10_0x2408c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2408c0u;

    // 0x2408c0: 0x27bdffe0
    ctx->pc = 0x2408c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2408c4: 0xffbf0010
    ctx->pc = 0x2408c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2408c8: 0xffb00000
    ctx->pc = 0x2408c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2408cc: 0xa0382d
    ctx->pc = 0x2408ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2408d0: 0x240303b0
    ctx->pc = 0x2408d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x2408d4: 0x831818
    ctx->pc = 0x2408d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2408d8: 0x3c020033
    ctx->pc = 0x2408d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x2408dc: 0x2442dfd0
    ctx->pc = 0x2408dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x2408e0: 0x628021
    ctx->pc = 0x2408e0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2408e4: 0x8e020368
    ctx->pc = 0x2408e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x2408e8: 0x4420001
    ctx->pc = 0x2408E8u;
    {
        const bool branch_taken_0x2408e8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2408e8) {
            ctx->pc = 0x2408ECu;
            SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->pc = 0x2408F0u;
            goto label_2408f0;
        }
    }
    ctx->pc = 0x2408F0u;
label_2408f0:
    // 0x2408f0: 0x28420003
    ctx->pc = 0x2408f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x2408f4: 0x10400008
    ctx->pc = 0x2408F4u;
    {
        const bool branch_taken_0x2408f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2408F8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2408f4) {
            ctx->pc = 0x240918u;
            goto label_240918;
        }
    }
    ctx->pc = 0x2408FCu;
    // 0x2408fc: 0x96020378
    ctx->pc = 0x2408fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
    // 0x240900: 0x24420001
    ctx->pc = 0x240900u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x240904: 0xa6020378
    ctx->pc = 0x240904u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 2));
    // 0x240908: 0xc08efc2
    ctx->pc = 0x240908u;
    SET_GPR_U32(ctx, 31, 0x240910u);
    ctx->pc = 0x24090Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeadEnd_0x23bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240910u; }
    }
    if (ctx->pc != 0x240910u) { return; }
    ctx->pc = 0x240910u;
    // 0x240910: 0x1000000a
    ctx->pc = 0x240910u;
    {
        const bool branch_taken_0x240910 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240914u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
        if (branch_taken_0x240910) {
            ctx->pc = 0x24093Cu;
            goto label_24093c;
        }
    }
    ctx->pc = 0x240918u;
label_240918:
    // 0x240918: 0xc08efc2
    ctx->pc = 0x240918u;
    SET_GPR_U32(ctx, 31, 0x240920u);
    ctx->pc = 0x23BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeadEnd_0x23bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240920u; }
    }
    if (ctx->pc != 0x240920u) { return; }
    ctx->pc = 0x240920u;
    // 0x240920: 0x3c02003c
    ctx->pc = 0x240920u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x240924: 0xc4401c6c
    ctx->pc = 0x240924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240928: 0xe6000260
    ctx->pc = 0x240928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x24092c: 0xe6000258
    ctx->pc = 0x24092cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x240930: 0xa6000378
    ctx->pc = 0x240930u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
    // 0x240934: 0xae000368
    ctx->pc = 0x240934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 0));
    // 0x240938: 0x86020378
    ctx->pc = 0x240938u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
label_24093c:
    // 0x24093c: 0x28420007
    ctx->pc = 0x24093cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 7));
    // 0x240940: 0x14400006
    ctx->pc = 0x240940u;
    {
        const bool branch_taken_0x240940 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x240944u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x240940) {
            ctx->pc = 0x24095Cu;
            goto label_24095c;
        }
    }
    ctx->pc = 0x240948u;
    // 0x240948: 0x8e020368
    ctx->pc = 0x240948u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x24094c: 0x21023
    ctx->pc = 0x24094cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x240950: 0x21040
    ctx->pc = 0x240950u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x240954: 0xae020368
    ctx->pc = 0x240954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
    // 0x240958: 0xa6000378
    ctx->pc = 0x240958u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
label_24095c:
    // 0x24095c: 0xdfb00000
    ctx->pc = 0x24095cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240960: 0x3e00008
    ctx->pc = 0x240960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240964u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2408F0u: goto label_2408f0;
            case 0x240918u: goto label_240918;
            case 0x24093Cu: goto label_24093c;
            case 0x24095Cu: goto label_24095c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240968u;
}
