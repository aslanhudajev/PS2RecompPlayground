#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSetGeomSeq
// Address: 0x2ab170 - 0x2ab284
void pbSetGeomSeq_0x2ab170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ab170u;

    // 0x2ab170: 0x27bdffd0
    ctx->pc = 0x2ab170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ab174: 0xffbf0020
    ctx->pc = 0x2ab174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ab178: 0xffbe0010
    ctx->pc = 0x2ab178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2ab17c: 0x3a0f02d
    ctx->pc = 0x2ab17cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab180: 0xafc40000
    ctx->pc = 0x2ab180u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2ab184: 0xafc50004
    ctx->pc = 0x2ab184u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x2ab188: 0x8fc20000
    ctx->pc = 0x2ab188u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2ab18c: 0x4410004
    ctx->pc = 0x2AB18Cu;
    {
        const bool branch_taken_0x2ab18c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2ab18c) {
            ctx->pc = 0x2AB1A0u;
            goto label_2ab1a0;
        }
    }
    ctx->pc = 0x2AB194u;
    // 0x2ab194: 0xc0aabf8
    ctx->pc = 0x2AB194u;
    SET_GPR_U32(ctx, 31, 0x2AB19Cu);
    ctx->pc = 0x2AAFE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbNextGeomSeq_0x2aafe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB19Cu; }
    }
    if (ctx->pc != 0x2AB19Cu) { return; }
    ctx->pc = 0x2AB19Cu;
    // 0x2ab19c: 0xafc20000
    ctx->pc = 0x2ab19cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2ab1a0:
    // 0x2ab1a0: 0x8fc20004
    ctx->pc = 0x2ab1a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab1a4: 0x3c037000
    ctx->pc = 0x2ab1a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)28672 << 16));
    // 0x2ab1a8: 0x34630002
    ctx->pc = 0x2ab1a8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 2));
    // 0x2ab1ac: 0xac430000
    ctx->pc = 0x2ab1acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ab1b0: 0x8fc30004
    ctx->pc = 0x2ab1b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab1b4: 0x24620004
    ctx->pc = 0x2ab1b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4));
    // 0x2ab1b8: 0xac400000
    ctx->pc = 0x2ab1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2ab1bc: 0x8fc30004
    ctx->pc = 0x2ab1bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab1c0: 0x24620008
    ctx->pc = 0x2ab1c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 8));
    // 0x2ab1c4: 0x3c031000
    ctx->pc = 0x2ab1c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2ab1c8: 0xac430000
    ctx->pc = 0x2ab1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ab1cc: 0x8fc30004
    ctx->pc = 0x2ab1ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab1d0: 0x2462000c
    ctx->pc = 0x2ab1d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 12));
    // 0x2ab1d4: 0x3c035000
    ctx->pc = 0x2ab1d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)20480 << 16));
    // 0x2ab1d8: 0x34630002
    ctx->pc = 0x2ab1d8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 2));
    // 0x2ab1dc: 0xac430000
    ctx->pc = 0x2ab1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ab1e0: 0x8fc30004
    ctx->pc = 0x2ab1e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab1e4: 0x24620010
    ctx->pc = 0x2ab1e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 16));
    // 0x2ab1e8: 0x34038001
    ctx->pc = 0x2ab1e8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32769));
    // 0x2ab1ec: 0xac430000
    ctx->pc = 0x2ab1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ab1f0: 0x8fc30004
    ctx->pc = 0x2ab1f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab1f4: 0x24620014
    ctx->pc = 0x2ab1f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 20));
    // 0x2ab1f8: 0x3c031000
    ctx->pc = 0x2ab1f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2ab1fc: 0xac430000
    ctx->pc = 0x2ab1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ab200: 0x8fc30004
    ctx->pc = 0x2ab200u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab204: 0x24620018
    ctx->pc = 0x2ab204u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 24));
    // 0x2ab208: 0x2403000e
    ctx->pc = 0x2ab208u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ab20c: 0xac430000
    ctx->pc = 0x2ab20cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ab210: 0x8fc30004
    ctx->pc = 0x2ab210u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab214: 0x2462001c
    ctx->pc = 0x2ab214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 28));
    // 0x2ab218: 0xac400000
    ctx->pc = 0x2ab218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2ab21c: 0x8fc30004
    ctx->pc = 0x2ab21cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab220: 0x24620020
    ctx->pc = 0x2ab220u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 32));
    // 0x2ab224: 0x8fc30000
    ctx->pc = 0x2ab224u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2ab228: 0xac430000
    ctx->pc = 0x2ab228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ab22c: 0x8fc30004
    ctx->pc = 0x2ab22cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab230: 0x24620024
    ctx->pc = 0x2ab230u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 36));
    // 0x2ab234: 0x3403ffff
    ctx->pc = 0x2ab234u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 65535));
    // 0x2ab238: 0xac430000
    ctx->pc = 0x2ab238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ab23c: 0x8fc30004
    ctx->pc = 0x2ab23cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab240: 0x24620028
    ctx->pc = 0x2ab240u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 40));
    // 0x2ab244: 0x24030060
    ctx->pc = 0x2ab244u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 96));
    // 0x2ab248: 0xac430000
    ctx->pc = 0x2ab248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ab24c: 0x8fc30004
    ctx->pc = 0x2ab24cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab250: 0x2462002c
    ctx->pc = 0x2ab250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 44));
    // 0x2ab254: 0xac400000
    ctx->pc = 0x2ab254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2ab258: 0x8fc20004
    ctx->pc = 0x2ab258u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2ab25c: 0x24430030
    ctx->pc = 0x2ab25cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 48));
    // 0x2ab260: 0x60102d
    ctx->pc = 0x2ab260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab264: 0x10000001
    ctx->pc = 0x2AB264u;
    {
        const bool branch_taken_0x2ab264 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ab264) {
            ctx->pc = 0x2AB26Cu;
            goto label_2ab26c;
        }
    }
    ctx->pc = 0x2AB26Cu;
label_2ab26c:
    // 0x2ab26c: 0x3c0e82d
    ctx->pc = 0x2ab26cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab270: 0xdfbf0020
    ctx->pc = 0x2ab270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab274: 0xdfbe0010
    ctx->pc = 0x2ab274u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab278: 0x27bd0030
    ctx->pc = 0x2ab278u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ab27c: 0x3e00008
    ctx->pc = 0x2AB27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AB1A0u: goto label_2ab1a0;
            case 0x2AB26Cu: goto label_2ab26c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AB284u;
}
