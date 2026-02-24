#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _cpr8
// Address: 0x1250f0 - 0x1252dc
void _cpr8_0x1250f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1250f0u;

    // 0x1250f0: 0x3c030017
    ctx->pc = 0x1250f0u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
    // 0x1250f4: 0x80602d
    ctx->pc = 0x1250f4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250f8: 0x8c6417bc
    ctx->pc = 0x1250f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 6076)));
    // 0x1250fc: 0x3c020fff
    ctx->pc = 0x1250fcu;
    SET_GPR_S32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x125100: 0x3c030017
    ctx->pc = 0x125100u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
    // 0x125104: 0x8d850000
    ctx->pc = 0x125104u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x125108: 0x8c980040
    ctx->pc = 0x125108u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x12510c: 0x3442ffff
    ctx->pc = 0x12510cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)65535);
    // 0x125110: 0x8c6619ac
    ctx->pc = 0x125110u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 6572)));
    // 0x125114: 0xa24824
    ctx->pc = 0x125114u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x125118: 0x8f0300d8
    ctx->pc = 0x125118u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 216)));
    // 0x12511c: 0x24040003
    ctx->pc = 0x12511cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x125120: 0x10c40006
    ctx->pc = 0x125120u;
    {
        const bool branch_taken_0x125120 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 4));
        ctx->pc = 0x125124u;
        SET_GPR_U32(ctx, 15, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x125120) {
            ctx->pc = 0x12513Cu;
            goto label_12513c;
        }
    }
    ctx->pc = 0x125128u;
    // 0x125128: 0x8f0400e0
    ctx->pc = 0x125128u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 24), 224)));
    // 0x12512c: 0x1480000f
    ctx->pc = 0x12512Cu;
    {
        const bool branch_taken_0x12512c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x125130u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12512c) {
            ctx->pc = 0x12516Cu;
            goto label_12516c;
        }
    }
    ctx->pc = 0x125134u;
    // 0x125134: 0x10000003
    ctx->pc = 0x125134u;
    {
        const bool branch_taken_0x125134 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x125138u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 16)));
        if (branch_taken_0x125134) {
            ctx->pc = 0x125144u;
            goto label_125144;
        }
    }
    ctx->pc = 0x12513Cu;
label_12513c:
    // 0x12513c: 0x8f0300e0
    ctx->pc = 0x12513cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 24), 224)));
    // 0x125140: 0x8d820010
    ctx->pc = 0x125140u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 16)));
label_125144:
    // 0x125144: 0x24040180
    ctx->pc = 0x125144u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 384));
    // 0x125148: 0x445818
    ctx->pc = 0x125148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)(uint32_t)result); }
    // 0x12514c: 0x10600004
    ctx->pc = 0x12514Cu;
    {
        const bool branch_taken_0x12514c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x125150u;
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 4));
        if (branch_taken_0x12514c) {
            ctx->pc = 0x125160u;
            goto label_125160;
        }
    }
    ctx->pc = 0x125154u;
    // 0x125154: 0x31103
    ctx->pc = 0x125154u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x125158: 0x10000002
    ctx->pc = 0x125158u;
    {
        const bool branch_taken_0x125158 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12515Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)(uint32_t)result); }
        if (branch_taken_0x125158) {
            ctx->pc = 0x125164u;
            goto label_125164;
        }
    }
    ctx->pc = 0x125160u;
label_125160:
    // 0x125160: 0x160702d
    ctx->pc = 0x125160u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_125164:
    // 0x125164: 0x1000000a
    ctx->pc = 0x125164u;
    {
        const bool branch_taken_0x125164 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x125168u;
        SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x125164) {
            ctx->pc = 0x125190u;
            goto label_125190;
        }
    }
    ctx->pc = 0x12516Cu;
label_12516c:
    // 0x12516c: 0x8d820010
    ctx->pc = 0x12516cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x125170: 0x24050180
    ctx->pc = 0x125170u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 384));
    // 0x125174: 0x42103
    ctx->pc = 0x125174u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x125178: 0x240300c0
    ctx->pc = 0x125178u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 192));
    // 0x12517c: 0x21043
    ctx->pc = 0x12517cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x125180: 0x837018
    ctx->pc = 0x125180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)(uint32_t)result); }
    // 0x125184: 0x70455818
    ctx->pc = 0x125184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x125188: 0x24190002
    ctx->pc = 0x125188u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 2));
    // 0x12518c: 0xb5103
    ctx->pc = 0x12518cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 4));
label_125190:
    // 0x125190: 0x13200050
    ctx->pc = 0x125190u;
    {
        const bool branch_taken_0x125190 = (GPR_U32(ctx, 25) == GPR_U32(ctx, 0));
        ctx->pc = 0x125194u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x125190) {
            ctx->pc = 0x1252D4u;
            goto label_1252d4;
        }
    }
    ctx->pc = 0x125198u;
    // 0x125198: 0x8d87000c
    ctx->pc = 0x125198u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x12519c: 0x0
    ctx->pc = 0x12519cu;
    // NOP
label_1251a0:
    // 0x1251a0: 0x1e0402d
    ctx->pc = 0x1251a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251a4: 0x18e00043
    ctx->pc = 0x1251A4u;
    {
        const bool branch_taken_0x1251a4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1251A8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1251a4) {
            ctx->pc = 0x1252B4u;
            goto label_1252b4;
        }
    }
    ctx->pc = 0x1251ACu;
    // 0x1251ac: 0x24ad0001
    ctx->pc = 0x1251acu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 5), 1));
label_1251b0:
    // 0x1251b0: 0x3c021000
    ctx->pc = 0x1251b0u;
    SET_GPR_S32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1251b4: 0x3c041000
    ctx->pc = 0x1251b4u;
    SET_GPR_S32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x1251b8: 0x3442d480
    ctx->pc = 0x1251b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)54400);
    // 0x1251bc: 0x3484d410
    ctx->pc = 0x1251bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)54288);
    // 0x1251c0: 0xac400000
    ctx->pc = 0x1251c0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x1251c4: 0x3c031000
    ctx->pc = 0x1251c4u;
    SET_GPR_S32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1251c8: 0xac890000
    ctx->pc = 0x1251c8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9)); // MMIO: 0x10000000
    // 0x1251cc: 0x3463d420
    ctx->pc = 0x1251ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)54304);
    // 0x1251d0: 0x3c041000
    ctx->pc = 0x1251d0u;
    SET_GPR_S32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x1251d4: 0xac6a0000
    ctx->pc = 0x1251d4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10)); // MMIO: 0x10000000
    // 0x1251d8: 0x3484d400
    ctx->pc = 0x1251d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)54272);
    // 0x1251dc: 0x24020101
    ctx->pc = 0x1251dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 257));
    // 0x1251e0: 0x3c031000
    ctx->pc = 0x1251e0u;
    SET_GPR_S32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1251e4: 0x12b2821
    ctx->pc = 0x1251e4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x1251e8: 0xac820000
    ctx->pc = 0x1251e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1251ec: 0x24c60001
    ctx->pc = 0x1251ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1251f0: 0x10e4821
    ctx->pc = 0x1251f0u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x1251f4: 0x3463d400
    ctx->pc = 0x1251f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)54272);
label_1251f8:
    // 0x1251f8: 0x8c620000
    ctx->pc = 0x1251f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1251fc: 0x30420100
    ctx->pc = 0x1251fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x125200: 0x0
    ctx->pc = 0x125200u;
    // NOP
    // 0x125204: 0x0
    ctx->pc = 0x125204u;
    // NOP
    // 0x125208: 0x0
    ctx->pc = 0x125208u;
    // NOP
    // 0x12520c: 0x1440fffa
    ctx->pc = 0x12520Cu;
    {
        const bool branch_taken_0x12520c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12520c) {
            ctx->pc = 0x1251F8u;
            goto label_1251f8;
        }
    }
    ctx->pc = 0x125214u;
    // 0x125214: 0x3c021000
    ctx->pc = 0x125214u;
    SET_GPR_S32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x125218: 0x3c041000
    ctx->pc = 0x125218u;
    SET_GPR_S32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x12521c: 0x3442d080
    ctx->pc = 0x12521cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)53376);
    // 0x125220: 0x3484d010
    ctx->pc = 0x125220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)53264);
    // 0x125224: 0xac400000
    ctx->pc = 0x125224u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x125228: 0x3c031000
    ctx->pc = 0x125228u;
    SET_GPR_S32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x12522c: 0xac880000
    ctx->pc = 0x12522cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8)); // MMIO: 0x10000000
    // 0x125230: 0x3463d020
    ctx->pc = 0x125230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)53280);
    // 0x125234: 0x3c041000
    ctx->pc = 0x125234u;
    SET_GPR_S32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x125238: 0xac6a0000
    ctx->pc = 0x125238u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10)); // MMIO: 0x10000000
    // 0x12523c: 0x3484d000
    ctx->pc = 0x12523cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)53248);
    // 0x125240: 0x24020100
    ctx->pc = 0x125240u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
    // 0x125244: 0xac820000
    ctx->pc = 0x125244u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x125248: 0x3c031000
    ctx->pc = 0x125248u;
    SET_GPR_S32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x12524c: 0x3463d000
    ctx->pc = 0x12524cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)53248);
    // 0x125250: 0x8d87000c
    ctx->pc = 0x125250u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x125254: 0x0
    ctx->pc = 0x125254u;
    // NOP
label_125258:
    // 0x125258: 0x8c620000
    ctx->pc = 0x125258u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x12525c: 0x30420100
    ctx->pc = 0x12525cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x125260: 0x0
    ctx->pc = 0x125260u;
    // NOP
    // 0x125264: 0x0
    ctx->pc = 0x125264u;
    // NOP
    // 0x125268: 0x0
    ctx->pc = 0x125268u;
    // NOP
    // 0x12526c: 0x1440fffa
    ctx->pc = 0x12526Cu;
    {
        const bool branch_taken_0x12526c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12526c) {
            ctx->pc = 0x125258u;
            goto label_125258;
        }
    }
    ctx->pc = 0x125274u;
    // 0x125274: 0x3c031000
    ctx->pc = 0x125274u;
    SET_GPR_S32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x125278: 0x3463d020
    ctx->pc = 0x125278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)53280);
    // 0x12527c: 0x0
    ctx->pc = 0x12527cu;
    // NOP
label_125280:
    // 0x125280: 0x8c620000
    ctx->pc = 0x125280u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x125284: 0x0
    ctx->pc = 0x125284u;
    // NOP
    // 0x125288: 0x0
    ctx->pc = 0x125288u;
    // NOP
    // 0x12528c: 0x0
    ctx->pc = 0x12528cu;
    // NOP
    // 0x125290: 0x0
    ctx->pc = 0x125290u;
    // NOP
    // 0x125294: 0x1440fffa
    ctx->pc = 0x125294u;
    {
        const bool branch_taken_0x125294 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x125294) {
            ctx->pc = 0x125280u;
            goto label_125280;
        }
    }
    ctx->pc = 0x12529Cu;
    // 0x12529c: 0x120402d
    ctx->pc = 0x12529cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252a0: 0xc7102a
    ctx->pc = 0x1252a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 7)));
    // 0x1252a4: 0x1440ffc2
    ctx->pc = 0x1252A4u;
    {
        const bool branch_taken_0x1252a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1252A8u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1252a4) {
            ctx->pc = 0x1251B0u;
            goto label_1251b0;
        }
    }
    ctx->pc = 0x1252ACu;
    // 0x1252ac: 0x10000003
    ctx->pc = 0x1252ACu;
    {
        const bool branch_taken_0x1252ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1252B0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 24), 228)));
        if (branch_taken_0x1252ac) {
            ctx->pc = 0x1252BCu;
            goto label_1252bc;
        }
    }
    ctx->pc = 0x1252B4u;
label_1252b4:
    // 0x1252b4: 0x24ad0001
    ctx->pc = 0x1252b4u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1252b8: 0x8f0200e4
    ctx->pc = 0x1252b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 24), 228)));
label_1252bc:
    // 0x1252bc: 0x240300c0
    ctx->pc = 0x1252bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 192));
    // 0x1252c0: 0x1a0282d
    ctx->pc = 0x1252c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252c4: 0x433018
    ctx->pc = 0x1252c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
    // 0x1252c8: 0xb9202a
    ctx->pc = 0x1252c8u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 25)));
    // 0x1252cc: 0x1480ffb4
    ctx->pc = 0x1252CCu;
    {
        const bool branch_taken_0x1252cc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1252D0u;
        SET_GPR_U32(ctx, 15, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
        if (branch_taken_0x1252cc) {
            ctx->pc = 0x1251A0u;
            goto label_1251a0;
        }
    }
    ctx->pc = 0x1252D4u;
label_1252d4:
    // 0x1252d4: 0x3e00008
    ctx->pc = 0x1252D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12513Cu: goto label_12513c;
            case 0x125144u: goto label_125144;
            case 0x125160u: goto label_125160;
            case 0x125164u: goto label_125164;
            case 0x12516Cu: goto label_12516c;
            case 0x125190u: goto label_125190;
            case 0x1251A0u: goto label_1251a0;
            case 0x1251B0u: goto label_1251b0;
            case 0x1251F8u: goto label_1251f8;
            case 0x125258u: goto label_125258;
            case 0x125280u: goto label_125280;
            case 0x1252B4u: goto label_1252b4;
            case 0x1252BCu: goto label_1252bc;
            case 0x1252D4u: goto label_1252d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1252DCu;
}
