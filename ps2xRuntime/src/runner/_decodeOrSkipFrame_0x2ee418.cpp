#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _decodeOrSkipFrame
// Address: 0x2ee418 - 0x2ee53c
void _decodeOrSkipFrame_0x2ee418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ee418u;

    // 0x2ee418: 0x27bdffa0
    ctx->pc = 0x2ee418u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ee41c: 0x2402ffff
    ctx->pc = 0x2ee41cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ee420: 0xffb40040
    ctx->pc = 0x2ee420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ee424: 0xffb10010
    ctx->pc = 0x2ee424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ee428: 0xa02d
    ctx->pc = 0x2ee428u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee42c: 0xffbf0050
    ctx->pc = 0x2ee42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ee430: 0x80882d
    ctx->pc = 0x2ee430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee434: 0xffb30030
    ctx->pc = 0x2ee434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ee438: 0xffb20020
    ctx->pc = 0x2ee438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ee43c: 0xffb00000
    ctx->pc = 0x2ee43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ee440: 0x10c20004
    ctx->pc = 0x2EE440u;
    {
        const bool branch_taken_0x2ee440 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x2EE444u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 64)));
        if (branch_taken_0x2ee440) {
            ctx->pc = 0x2EE454u;
            goto label_2ee454;
        }
    }
    ctx->pc = 0x2EE448u;
    // 0x2ee448: 0xa6102a
    ctx->pc = 0x2ee448u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x2ee44c: 0x10400013
    ctx->pc = 0x2EE44Cu;
    {
        const bool branch_taken_0x2ee44c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE450u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ee44c) {
            ctx->pc = 0x2EE49Cu;
            goto label_2ee49c;
        }
    }
    ctx->pc = 0x2EE454u;
label_2ee454:
    // 0x2ee454: 0x8e020008
    ctx->pc = 0x2ee454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ee458: 0x14400003
    ctx->pc = 0x2EE458u;
    {
        const bool branch_taken_0x2ee458 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2EE45Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2ee458) {
            ctx->pc = 0x2EE468u;
            goto label_2ee468;
        }
    }
    ctx->pc = 0x2EE460u;
    // 0x2ee460: 0xae200008
    ctx->pc = 0x2ee460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x2ee464: 0xae020008
    ctx->pc = 0x2ee464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2ee468:
    // 0x2ee468: 0xc0bcd72
    ctx->pc = 0x2EE468u;
    SET_GPR_U32(ctx, 31, 0x2EE470u);
    ctx->pc = 0x2EE46Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F35C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _updateRefImage_0x2f35c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE470u; }
    }
    if (ctx->pc != 0x2EE470u) { return; }
    ctx->pc = 0x2EE470u;
    // 0x2ee470: 0x10400007
    ctx->pc = 0x2EE470u;
    {
        const bool branch_taken_0x2ee470 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE474u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ee470) {
            ctx->pc = 0x2EE490u;
            goto label_2ee490;
        }
    }
    ctx->pc = 0x2EE478u;
    // 0x2ee478: 0x3c13003a
    ctx->pc = 0x2ee478u;
    SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
    // 0x2ee47c: 0x8e050004
    ctx->pc = 0x2ee47cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ee480: 0xc0bcd0c
    ctx->pc = 0x2EE480u;
    SET_GPR_U32(ctx, 31, 0x2EE488u);
    ctx->pc = 0x2EE484u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12612)));
    ctx->pc = 0x2F3430u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decPicture_0x2f3430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE488u; }
    }
    if (ctx->pc != 0x2EE488u) { return; }
    ctx->pc = 0x2EE488u;
    // 0x2ee488: 0x10000002
    ctx->pc = 0x2EE488u;
    {
        const bool branch_taken_0x2ee488 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE48Cu;
        SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        if (branch_taken_0x2ee488) {
            ctx->pc = 0x2EE494u;
            goto label_2ee494;
        }
    }
    ctx->pc = 0x2EE490u;
label_2ee490:
    // 0x2ee490: 0x3c13003a
    ctx->pc = 0x2ee490u;
    SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
label_2ee494:
    // 0x2ee494: 0x10000007
    ctx->pc = 0x2EE494u;
    {
        const bool branch_taken_0x2ee494 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE498u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ee494) {
            ctx->pc = 0x2EE4B4u;
            goto label_2ee4b4;
        }
    }
    ctx->pc = 0x2EE49Cu;
label_2ee49c:
    // 0x2ee49c: 0xc0bcd72
    ctx->pc = 0x2EE49Cu;
    SET_GPR_U32(ctx, 31, 0x2EE4A4u);
    ctx->pc = 0x2EE4A0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F35C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _updateRefImage_0x2f35c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE4A4u; }
    }
    if (ctx->pc != 0x2EE4A4u) { return; }
    ctx->pc = 0x2EE4A4u;
    // 0x2ee4a4: 0x3c13003a
    ctx->pc = 0x2ee4a4u;
    SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
    // 0x2ee4a8: 0x40902d
    ctx->pc = 0x2ee4a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee4ac: 0xc0bb848
    ctx->pc = 0x2EE4ACu;
    SET_GPR_U32(ctx, 31, 0x2EE4B4u);
    ctx->pc = 0x2EE4B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EE120u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x2ee120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE4B4u; }
    }
    if (ctx->pc != 0x2EE4B4u) { return; }
    ctx->pc = 0x2EE4B4u;
label_2ee4b4:
    // 0x2ee4b4: 0x8e643144
    ctx->pc = 0x2ee4b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12612)));
    // 0x2ee4b8: 0xc0bcd44
    ctx->pc = 0x2EE4B8u;
    SET_GPR_U32(ctx, 31, 0x2EE4C0u);
    ctx->pc = 0x2EE4BCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x2F3510u;
    {
        const uint32_t __entryPc = ctx->pc;
        _outputFrame_0x2f3510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE4C0u; }
    }
    if (ctx->pc != 0x2EE4C0u) { return; }
    ctx->pc = 0x2EE4C0u;
    // 0x2ee4c0: 0x3c02003a
    ctx->pc = 0x2ee4c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ee4c4: 0x24040003
    ctx->pc = 0x2ee4c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ee4c8: 0x8c4331ec
    ctx->pc = 0x2ee4c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12780)));
    // 0x2ee4cc: 0x10640007
    ctx->pc = 0x2EE4CCu;
    {
        const bool branch_taken_0x2ee4cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x2EE4D0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2ee4cc) {
            ctx->pc = 0x2EE4ECu;
            goto label_2ee4ec;
        }
    }
    ctx->pc = 0x2EE4D4u;
    // 0x2ee4d4: 0x16800006
    ctx->pc = 0x2EE4D4u;
    {
        const bool branch_taken_0x2ee4d4 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        ctx->pc = 0x2EE4D8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12612)));
        if (branch_taken_0x2ee4d4) {
            ctx->pc = 0x2EE4F0u;
            goto label_2ee4f0;
        }
    }
    ctx->pc = 0x2EE4DCu;
    // 0x2ee4dc: 0x3c03003a
    ctx->pc = 0x2ee4dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2ee4e0: 0x8c62315c
    ctx->pc = 0x2ee4e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12636)));
    // 0x2ee4e4: 0x2c420001
    ctx->pc = 0x2ee4e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x2ee4e8: 0xac62315c
    ctx->pc = 0x2ee4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12636), GPR_U32(ctx, 2));
label_2ee4ec:
    // 0x2ee4ec: 0x8e643144
    ctx->pc = 0x2ee4ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12612)));
label_2ee4f0:
    // 0x2ee4f0: 0x8e0200ac
    ctx->pc = 0x2ee4f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x2ee4f4: 0x8c63315c
    ctx->pc = 0x2ee4f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 12636)));
    // 0x2ee4f8: 0x821023
    ctx->pc = 0x2ee4f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ee4fc: 0x14600006
    ctx->pc = 0x2EE4FCu;
    {
        const bool branch_taken_0x2ee4fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2EE500u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x2ee4fc) {
            ctx->pc = 0x2EE518u;
            goto label_2ee518;
        }
    }
    ctx->pc = 0x2EE504u;
    // 0x2ee504: 0x8e020004
    ctx->pc = 0x2ee504u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ee508: 0x24830001
    ctx->pc = 0x2ee508u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ee50c: 0xae633144
    ctx->pc = 0x2ee50cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12612), GPR_U32(ctx, 3));
    // 0x2ee510: 0x24420001
    ctx->pc = 0x2ee510u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ee514: 0xae020004
    ctx->pc = 0x2ee514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2ee518:
    // 0x2ee518: 0x240102d
    ctx->pc = 0x2ee518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee51c: 0xdfbf0050
    ctx->pc = 0x2ee51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ee520: 0xdfb40040
    ctx->pc = 0x2ee520u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ee524: 0xdfb30030
    ctx->pc = 0x2ee524u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ee528: 0xdfb20020
    ctx->pc = 0x2ee528u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee52c: 0xdfb10010
    ctx->pc = 0x2ee52cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee530: 0xdfb00000
    ctx->pc = 0x2ee530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee534: 0x3e00008
    ctx->pc = 0x2EE534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE538u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EE454u: goto label_2ee454;
            case 0x2EE468u: goto label_2ee468;
            case 0x2EE490u: goto label_2ee490;
            case 0x2EE494u: goto label_2ee494;
            case 0x2EE49Cu: goto label_2ee49c;
            case 0x2EE4B4u: goto label_2ee4b4;
            case 0x2EE4ECu: goto label_2ee4ec;
            case 0x2EE4F0u: goto label_2ee4f0;
            case 0x2EE518u: goto label_2ee518;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2EE53Cu;
}
