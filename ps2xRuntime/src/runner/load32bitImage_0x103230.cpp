#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: load32bitImage
// Address: 0x103230 - 0x103470
void load32bitImage_0x103230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x103230u;

    // 0x103230: 0x27bdffc0
    ctx->pc = 0x103230u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x103234: 0x8f8882b8
    ctx->pc = 0x103234u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103238: 0xffb00000
    ctx->pc = 0x103238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10323c: 0x700014a9
    ctx->pc = 0x10323cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103240: 0xffb20020
    ctx->pc = 0x103240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x103244: 0xc78018
    ctx->pc = 0x103244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
    // 0x103248: 0xffbf0030
    ctx->pc = 0x103248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10324c: 0x240affff
    ctx->pc = 0x10324cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x103250: 0xffb10010
    ctx->pc = 0x103250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103254: 0x146182a
    ctx->pc = 0x103254u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 6)));
    // 0x103258: 0x7d020000
    ctx->pc = 0x103258u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x10325c: 0x3c091000
    ctx->pc = 0x10325cu;
    SET_GPR_S32(ctx, 9, ((uint32_t)4096 << 16));
    // 0x103260: 0x24c2003f
    ctx->pc = 0x103260u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 63));
    // 0x103264: 0xa0902d
    ctx->pc = 0x103264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103268: 0xc3100b
    ctx->pc = 0x103268u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x10326c: 0x120282d
    ctx->pc = 0x10326cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103270: 0x150502a
    ctx->pc = 0x103270u;
    SET_GPR_U32(ctx, 10, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 16)));
    // 0x103274: 0x21183
    ctx->pc = 0x103274u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x103278: 0x26030003
    ctx->pc = 0x103278u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 3));
    // 0x10327c: 0x2143c
    ctx->pc = 0x10327cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x103280: 0x20a180b
    ctx->pc = 0x103280u;
    if (GPR_U32(ctx, 10) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 16));
    // 0x103284: 0x7383c
    ctx->pc = 0x103284u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x103288: 0x12483c
    ctx->pc = 0x103288u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) << (32 + 0));
    // 0x10328c: 0xc73825
    ctx->pc = 0x10328cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x103290: 0x1224825
    ctx->pc = 0x103290u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x103294: 0x240a003f
    ctx->pc = 0x103294u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 63));
    // 0x103298: 0x34a50006
    ctx->pc = 0x103298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)6);
    // 0x10329c: 0x3c021000
    ctx->pc = 0x10329cu;
    SET_GPR_S32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1032a0: 0x2103c
    ctx->pc = 0x1032a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1032a4: 0x34420005
    ctx->pc = 0x1032a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)5);
    // 0x1032a8: 0x2406000e
    ctx->pc = 0x1032a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1032ac: 0x240b0050
    ctx->pc = 0x1032acu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 80));
    // 0x1032b0: 0x240c0051
    ctx->pc = 0x1032b0u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 81));
    // 0x1032b4: 0x240d0052
    ctx->pc = 0x1032b4u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 82));
    // 0x1032b8: 0x240e0053
    ctx->pc = 0x1032b8u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 83));
    // 0x1032bc: 0xfd0a0028
    ctx->pc = 0x1032bcu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 10));
    // 0x1032c0: 0xad050000
    ctx->pc = 0x1032c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x1032c4: 0x80c82d
    ctx->pc = 0x1032c4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1032c8: 0xfd020010
    ctx->pc = 0x1032c8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 2));
    // 0x1032cc: 0x37883
    ctx->pc = 0x1032ccu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1032d0: 0xfd060018
    ctx->pc = 0x1032d0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 6));
    // 0x1032d4: 0xc02d
    ctx->pc = 0x1032d4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1032d8: 0x240a0007
    ctx->pc = 0x1032d8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1032dc: 0xfd090030
    ctx->pc = 0x1032dcu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 48), GPR_U64(ctx, 9));
    // 0x1032e0: 0xfd0b0038
    ctx->pc = 0x1032e0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 56), GPR_U64(ctx, 11));
    // 0x1032e4: 0xfd0c0048
    ctx->pc = 0x1032e4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 72), GPR_U64(ctx, 12));
    // 0x1032e8: 0xfd070050
    ctx->pc = 0x1032e8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 80), GPR_U64(ctx, 7));
    // 0x1032ec: 0xfd0d0058
    ctx->pc = 0x1032ecu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 88), GPR_U64(ctx, 13));
    // 0x1032f0: 0xfd0e0068
    ctx->pc = 0x1032f0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 104), GPR_U64(ctx, 14));
    // 0x1032f4: 0xfd000020
    ctx->pc = 0x1032f4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 0));
    // 0x1032f8: 0xfd000040
    ctx->pc = 0x1032f8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 64), GPR_U64(ctx, 0));
    // 0x1032fc: 0x19e00035
    ctx->pc = 0x1032FCu;
    {
        const bool branch_taken_0x1032fc = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x103300u;
        WRITE64(ADD32(GPR_U32(ctx, 8), 96), GPR_U64(ctx, 0));
        if (branch_taken_0x1032fc) {
            ctx->pc = 0x1033D4u;
            goto label_1033d4;
        }
    }
    ctx->pc = 0x103304u;
    // 0x103304: 0x261103ff
    ctx->pc = 0x103304u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 1023));
label_103308:
    // 0x103308: 0x8f8282b8
    ctx->pc = 0x103308u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x10330c: 0xa1900
    ctx->pc = 0x10330cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 10), 4));
    // 0x103310: 0x24052000
    ctx->pc = 0x103310u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x103314: 0x3c041000
    ctx->pc = 0x103314u;
    SET_GPR_S32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x103318: 0x623021
    ctx->pc = 0x103318u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10331c: 0xaf282a
    ctx->pc = 0x10331cu;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 15)));
    // 0x103320: 0x700014a9
    ctx->pc = 0x103320u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103324: 0x34840001
    ctx->pc = 0x103324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)1);
    // 0x103328: 0x7cc20000
    ctx->pc = 0x103328u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x10332c: 0x254a0001
    ctx->pc = 0x10332cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x103330: 0x24020001
    ctx->pc = 0x103330u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x103334: 0x45c00a
    ctx->pc = 0x103334u;
    if (GPR_U32(ctx, 5) == 0) SET_GPR_U32(ctx, 24, GPR_U32(ctx, 2));
    // 0x103338: 0x29e22001
    ctx->pc = 0x103338u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 15), 8193));
    // 0x10333c: 0x14400004
    ctx->pc = 0x10333Cu;
    {
        const bool branch_taken_0x10333c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x103340u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x10333c) {
            ctx->pc = 0x103350u;
            goto label_103350;
        }
    }
    ctx->pc = 0x103344u;
    // 0x103344: 0x24072000
    ctx->pc = 0x103344u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x103348: 0x10000003
    ctx->pc = 0x103348u;
    {
        const bool branch_taken_0x103348 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10334Cu;
        SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 4294959104));
        if (branch_taken_0x103348) {
            ctx->pc = 0x103358u;
            goto label_103358;
        }
    }
    ctx->pc = 0x103350u;
label_103350:
    // 0x103350: 0x1e0382d
    ctx->pc = 0x103350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103354: 0x782d
    ctx->pc = 0x103354u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103358:
    // 0x103358: 0x300102d
    ctx->pc = 0x103358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10335c: 0x8f8582b8
    ctx->pc = 0x10335cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103360: 0x213f8
    ctx->pc = 0x103360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x103364: 0xa2100
    ctx->pc = 0x103364u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 10), 4));
    // 0x103368: 0xe21025
    ctx->pc = 0x103368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x10336c: 0x34038000
    ctx->pc = 0x10336cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)32768);
    // 0x103370: 0x31b3c
    ctx->pc = 0x103370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x103374: 0x852021
    ctx->pc = 0x103374u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x103378: 0x431025
    ctx->pc = 0x103378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10337c: 0x254a0001
    ctx->pc = 0x10337cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x103380: 0xfc820000
    ctx->pc = 0x103380u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x103384: 0xa3100
    ctx->pc = 0x103384u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 10), 4));
    // 0x103388: 0xfc800008
    ctx->pc = 0x103388u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
    // 0x10338c: 0xc52821
    ctx->pc = 0x10338cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x103390: 0x700014a9
    ctx->pc = 0x103390u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103394: 0x17000003
    ctx->pc = 0x103394u;
    {
        const bool branch_taken_0x103394 = (GPR_U32(ctx, 24) != GPR_U32(ctx, 0));
        ctx->pc = 0x103398u;
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        if (branch_taken_0x103394) {
            ctx->pc = 0x1033A4u;
            goto label_1033a4;
        }
    }
    ctx->pc = 0x10339Cu;
    // 0x10339c: 0x3c023000
    ctx->pc = 0x10339cu;
    SET_GPR_S32(ctx, 2, ((uint32_t)12288 << 16));
    // 0x1033a0: 0xaca20000
    ctx->pc = 0x1033a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1033a4:
    // 0x1033a4: 0x8f8282b8
    ctx->pc = 0x1033a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1033a8: 0x72100
    ctx->pc = 0x1033a8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 7), 4));
    // 0x1033ac: 0x254a0001
    ctx->pc = 0x1033acu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x1033b0: 0xc21021
    ctx->pc = 0x1033b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1033b4: 0x8c430000
    ctx->pc = 0x1033b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1033b8: 0xac590004
    ctx->pc = 0x1033b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 25));
    // 0x1033bc: 0x671825
    ctx->pc = 0x1033bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1033c0: 0x324c821
    ctx->pc = 0x1033c0u;
    SET_GPR_U32(ctx, 25, ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 4)));
    // 0x1033c4: 0x1de0ffd0
    ctx->pc = 0x1033C4u;
    {
        const bool branch_taken_0x1033c4 = (GPR_S32(ctx, 15) > 0);
        ctx->pc = 0x1033C8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1033c4) {
            ctx->pc = 0x103308u;
            goto label_103308;
        }
    }
    ctx->pc = 0x1033CCu;
    // 0x1033cc: 0x10000003
    ctx->pc = 0x1033CCu;
    {
        const bool branch_taken_0x1033cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1033D0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
        if (branch_taken_0x1033cc) {
            ctx->pc = 0x1033DCu;
            goto label_1033dc;
        }
    }
    ctx->pc = 0x1033D4u;
label_1033d4:
    // 0x1033d4: 0x261103ff
    ctx->pc = 0x1033d4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 1023));
    // 0x1033d8: 0x8f8382b8
    ctx->pc = 0x1033d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
label_1033dc:
    // 0x1033dc: 0xa1100
    ctx->pc = 0x1033dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 4));
    // 0x1033e0: 0x700034a9
    ctx->pc = 0x1033e0u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1033e4: 0x3c057000
    ctx->pc = 0x1033e4u;
    SET_GPR_S32(ctx, 5, ((uint32_t)28672 << 16));
    // 0x1033e8: 0x431021
    ctx->pc = 0x1033e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1033ec: 0x202d
    ctx->pc = 0x1033ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1033f0: 0x7c460000
    ctx->pc = 0x1033f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x1033f4: 0xc043948
    ctx->pc = 0x1033F4u;
    SET_GPR_U32(ctx, 31, 0x1033FCu);
    ctx->pc = 0x1033F8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x10E520u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1033FCu; }
    }
    if (ctx->pc != 0x1033FCu) { return; }
    ctx->pc = 0x1033FCu;
    // 0x1033fc: 0x202d
    ctx->pc = 0x1033fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103400: 0xc043322
    ctx->pc = 0x103400u;
    SET_GPR_U32(ctx, 31, 0x103408u);
    ctx->pc = 0x103404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103408u; }
    }
    if (ctx->pc != 0x103408u) { return; }
    ctx->pc = 0x103408u;
    // 0x103408: 0x8f848490
    ctx->pc = 0x103408u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x10340c: 0x302d
    ctx->pc = 0x10340cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103410: 0xc04372a
    ctx->pc = 0x103410u;
    SET_GPR_U32(ctx, 31, 0x103418u);
    ctx->pc = 0x103414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10DCA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x10dca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103418u; }
    }
    if (ctx->pc != 0x103418u) { return; }
    ctx->pc = 0x103418u;
    // 0x103418: 0x8f8382b8
    ctx->pc = 0x103418u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x10341c: 0x3c050fff
    ctx->pc = 0x10341cu;
    SET_GPR_S32(ctx, 5, ((uint32_t)4095 << 16));
    // 0x103420: 0x34a5ffff
    ctx->pc = 0x103420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)65535);
    // 0x103424: 0x8f848490
    ctx->pc = 0x103424u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x103428: 0xc0435d6
    ctx->pc = 0x103428u;
    SET_GPR_U32(ctx, 31, 0x103430u);
    ctx->pc = 0x10342Cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x10D758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103430u; }
    }
    if (ctx->pc != 0x103430u) { return; }
    ctx->pc = 0x103430u;
    // 0x103430: 0x202d
    ctx->pc = 0x103430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103434: 0xc043322
    ctx->pc = 0x103434u;
    SET_GPR_U32(ctx, 31, 0x10343Cu);
    ctx->pc = 0x103438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10343Cu; }
    }
    if (ctx->pc != 0x10343Cu) { return; }
    ctx->pc = 0x10343Cu;
    // 0x10343c: 0x2403ffff
    ctx->pc = 0x10343cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x103440: 0xdfbf0030
    ctx->pc = 0x103440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103444: 0x70182a
    ctx->pc = 0x103444u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
    // 0x103448: 0x203880b
    ctx->pc = 0x103448u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 16));
    // 0x10344c: 0x111283
    ctx->pc = 0x10344cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 10));
    // 0x103450: 0xdfb00000
    ctx->pc = 0x103450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103454: 0x24420001
    ctx->pc = 0x103454u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x103458: 0xdfb10010
    ctx->pc = 0x103458u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10345c: 0x21100
    ctx->pc = 0x10345cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x103460: 0x2421021
    ctx->pc = 0x103460u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x103464: 0xdfb20020
    ctx->pc = 0x103464u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103468: 0x3e00008
    ctx->pc = 0x103468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10346Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103308u: goto label_103308;
            case 0x103350u: goto label_103350;
            case 0x103358u: goto label_103358;
            case 0x1033A4u: goto label_1033a4;
            case 0x1033D4u: goto label_1033d4;
            case 0x1033DCu: goto label_1033dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103470u;
}
