#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfhds_DoProcessHdr
// Address: 0x193230 - 0x193378
void sfhds_DoProcessHdr_0x193230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfhds_DoProcessHdr");


    ctx->pc = 0x193230u;

    // 0x193230: 0x27bdffb0
    ctx->pc = 0x193230u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x193234: 0xffb10020
    ctx->pc = 0x193234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x193238: 0xffb00010
    ctx->pc = 0x193238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19323c: 0x80882d
    ctx->pc = 0x19323cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193240: 0xa0802d
    ctx->pc = 0x193240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193244: 0xffbf0040
    ctx->pc = 0x193244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x193248: 0xffb20030
    ctx->pc = 0x193248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x19324c: 0xc067f32
    ctx->pc = 0x19324Cu;
    SET_GPR_U32(ctx, 31, 0x193254u);
    ctx->pc = 0x193250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19FCC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFH_IsSfdHeader_0x19fcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193254u; }
        else if (ctx->pc != 0x193254u) { ctx->pc = 0x193254u; }
    }
    if (ctx->pc != 0x193254u) { return; }
    ctx->pc = 0x193254u;
    // 0x193254: 0x50400001
    ctx->pc = 0x193254u;
    {
        const bool branch_taken_0x193254 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x193254) {
            ctx->pc = 0x193258u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x19325Cu;
            goto label_19325c;
        }
    }
    ctx->pc = 0x19325Cu;
label_19325c:
    // 0x19325c: 0x8fa20000
    ctx->pc = 0x19325cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193260: 0x1040003f
    ctx->pc = 0x193260u;
    {
        const bool branch_taken_0x193260 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x193264u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x193260) {
            ctx->pc = 0x193360u;
            goto label_193360;
        }
    }
    ctx->pc = 0x193268u;
    // 0x193268: 0x37a50004
    ctx->pc = 0x193268u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 4));
    // 0x19326c: 0xc068020
    ctx->pc = 0x19326Cu;
    SET_GPR_U32(ctx, 31, 0x193274u);
    ctx->pc = 0x193270u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x1A0080u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFH_AnlyHdrToolVer_0x1a0080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193274u; }
        else if (ctx->pc != 0x193274u) { ctx->pc = 0x193274u; }
    }
    if (ctx->pc != 0x193274u) { return; }
    ctx->pc = 0x193274u;
    // 0x193274: 0x14400004
    ctx->pc = 0x193274u;
    {
        const bool branch_taken_0x193274 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x193278u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x193274) {
            ctx->pc = 0x193288u;
            goto label_193288;
        }
    }
    ctx->pc = 0x19327Cu;
    // 0x19327c: 0xafa00004
    ctx->pc = 0x19327cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x193280: 0xafa00008
    ctx->pc = 0x193280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x193284: 0x8fa20004
    ctx->pc = 0x193284u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_193288:
    // 0x193288: 0x24060064
    ctx->pc = 0x193288u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 100));
    // 0x19328c: 0x8fa30008
    ctx->pc = 0x19328cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193290: 0x220202d
    ctx->pc = 0x193290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193294: 0x463818
    ctx->pc = 0x193294u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)(uint32_t)result); }
    // 0x193298: 0xae020004
    ctx->pc = 0x193298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x19329c: 0x37a5000c
    ctx->pc = 0x19329cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 29), 12));
    // 0x1932a0: 0xae030008
    ctx->pc = 0x1932a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1932a4: 0xc06813e
    ctx->pc = 0x1932A4u;
    SET_GPR_U32(ctx, 31, 0x1932ACu);
    ctx->pc = 0x1932A8u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    ctx->pc = 0x1A04F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFH_AnlyByteRate_0x1a04f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1932ACu; }
        else if (ctx->pc != 0x1932ACu) { ctx->pc = 0x1932ACu; }
    }
    if (ctx->pc != 0x1932ACu) { return; }
    ctx->pc = 0x1932ACu;
    // 0x1932ac: 0x50400001
    ctx->pc = 0x1932ACu;
    {
        const bool branch_taken_0x1932ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1932ac) {
            ctx->pc = 0x1932B0u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
            ctx->pc = 0x1932B4u;
            goto label_1932b4;
        }
    }
    ctx->pc = 0x1932B4u;
label_1932b4:
    // 0x1932b4: 0x2a42006e
    ctx->pc = 0x1932b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 110));
    // 0x1932b8: 0x10400003
    ctx->pc = 0x1932B8u;
    {
        const bool branch_taken_0x1932b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1932BCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
        if (branch_taken_0x1932b8) {
            ctx->pc = 0x1932C8u;
            goto label_1932c8;
        }
    }
    ctx->pc = 0x1932C0u;
    // 0x1932c0: 0x21023
    ctx->pc = 0x1932c0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1932c4: 0xafa2000c
    ctx->pc = 0x1932c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_1932c8:
    // 0x1932c8: 0x8fa2000c
    ctx->pc = 0x1932c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1932cc: 0x220202d
    ctx->pc = 0x1932ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1932d0: 0x200282d
    ctx->pc = 0x1932d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1932d4: 0xc064cde
    ctx->pc = 0x1932D4u;
    SET_GPR_U32(ctx, 31, 0x1932DCu);
    ctx->pc = 0x1932D8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x193378u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_AnlyHead_0x193378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1932DCu; }
        else if (ctx->pc != 0x1932DCu) { ctx->pc = 0x1932DCu; }
    }
    if (ctx->pc != 0x1932DCu) { return; }
    ctx->pc = 0x1932DCu;
    // 0x1932dc: 0x220202d
    ctx->pc = 0x1932dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1932e0: 0xc064d00
    ctx->pc = 0x1932E0u;
    SET_GPR_U32(ctx, 31, 0x1932E8u);
    ctx->pc = 0x1932E4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 32));
    ctx->pc = 0x193400u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_AnlySys_0x193400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1932E8u; }
        else if (ctx->pc != 0x1932E8u) { ctx->pc = 0x1932E8u; }
    }
    if (ctx->pc != 0x1932E8u) { return; }
    ctx->pc = 0x1932E8u;
    // 0x1932e8: 0x220202d
    ctx->pc = 0x1932e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1932ec: 0x240500bd
    ctx->pc = 0x1932ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 189));
    // 0x1932f0: 0xc064d2e
    ctx->pc = 0x1932F0u;
    SET_GPR_U32(ctx, 31, 0x1932F8u);
    ctx->pc = 0x1932F4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 189));
    ctx->pc = 0x1934B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_AnlyUsedStmid_0x1934b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1932F8u; }
        else if (ctx->pc != 0x1932F8u) { ctx->pc = 0x1932F8u; }
    }
    if (ctx->pc != 0x1932F8u) { return; }
    ctx->pc = 0x1932F8u;
    // 0x1932f8: 0xae02003c
    ctx->pc = 0x1932f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1932fc: 0x220202d
    ctx->pc = 0x1932fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193300: 0x240500bf
    ctx->pc = 0x193300u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 191));
    // 0x193304: 0xc064d2e
    ctx->pc = 0x193304u;
    SET_GPR_U32(ctx, 31, 0x19330Cu);
    ctx->pc = 0x193308u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 191));
    ctx->pc = 0x1934B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_AnlyUsedStmid_0x1934b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19330Cu; }
        else if (ctx->pc != 0x19330Cu) { ctx->pc = 0x19330Cu; }
    }
    if (ctx->pc != 0x19330Cu) { return; }
    ctx->pc = 0x19330Cu;
    // 0x19330c: 0xae020040
    ctx->pc = 0x19330cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x193310: 0x220202d
    ctx->pc = 0x193310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193314: 0x240500c0
    ctx->pc = 0x193314u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 192));
    // 0x193318: 0xc064d2e
    ctx->pc = 0x193318u;
    SET_GPR_U32(ctx, 31, 0x193320u);
    ctx->pc = 0x19331Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 223));
    ctx->pc = 0x1934B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_AnlyUsedStmid_0x1934b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193320u; }
        else if (ctx->pc != 0x193320u) { ctx->pc = 0x193320u; }
    }
    if (ctx->pc != 0x193320u) { return; }
    ctx->pc = 0x193320u;
    // 0x193320: 0xae020044
    ctx->pc = 0x193320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x193324: 0x220202d
    ctx->pc = 0x193324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193328: 0x240500e0
    ctx->pc = 0x193328u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x19332c: 0xc064d2e
    ctx->pc = 0x19332Cu;
    SET_GPR_U32(ctx, 31, 0x193334u);
    ctx->pc = 0x193330u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 239));
    ctx->pc = 0x1934B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_AnlyUsedStmid_0x1934b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193334u; }
        else if (ctx->pc != 0x193334u) { ctx->pc = 0x193334u; }
    }
    if (ctx->pc != 0x193334u) { return; }
    ctx->pc = 0x193334u;
    // 0x193334: 0x8e050044
    ctx->pc = 0x193334u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x193338: 0x220202d
    ctx->pc = 0x193338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19333c: 0xae020048
    ctx->pc = 0x19333cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x193340: 0xc064d4c
    ctx->pc = 0x193340u;
    SET_GPR_U32(ctx, 31, 0x193348u);
    ctx->pc = 0x193344u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 76));
    ctx->pc = 0x193530u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_AnlyAudio_0x193530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193348u; }
        else if (ctx->pc != 0x193348u) { ctx->pc = 0x193348u; }
    }
    if (ctx->pc != 0x193348u) { return; }
    ctx->pc = 0x193348u;
    // 0x193348: 0x8e050048
    ctx->pc = 0x193348u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x19334c: 0x220202d
    ctx->pc = 0x19334cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193350: 0xc064d72
    ctx->pc = 0x193350u;
    SET_GPR_U32(ctx, 31, 0x193358u);
    ctx->pc = 0x193354u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 92));
    ctx->pc = 0x1935C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_AnlyVideo_0x1935c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193358u; }
        else if (ctx->pc != 0x193358u) { ctx->pc = 0x193358u; }
    }
    if (ctx->pc != 0x193358u) { return; }
    ctx->pc = 0x193358u;
    // 0x193358: 0x24020001
    ctx->pc = 0x193358u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19335c: 0xae020000
    ctx->pc = 0x19335cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_193360:
    // 0x193360: 0xdfbf0040
    ctx->pc = 0x193360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193364: 0xdfb20030
    ctx->pc = 0x193364u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193368: 0xdfb10020
    ctx->pc = 0x193368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19336c: 0xdfb00010
    ctx->pc = 0x19336cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193370: 0x3e00008
    ctx->pc = 0x193370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193374u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19325Cu: goto label_19325c;
            case 0x193288u: goto label_193288;
            case 0x1932B4u: goto label_1932b4;
            case 0x1932C8u: goto label_1932c8;
            case 0x193360u: goto label_193360;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193378u;
}
