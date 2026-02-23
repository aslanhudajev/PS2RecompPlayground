#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _sequenceHeader
// Address: 0x164598 - 0x1646ec
void _sequenceHeader_0x164598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_sequenceHeader");


    ctx->pc = 0x164598u;

    // 0x164598: 0x27bdffd0
    ctx->pc = 0x164598u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16459c: 0x24040020
    ctx->pc = 0x16459cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1645a0: 0xffb10010
    ctx->pc = 0x1645a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1645a4: 0x3c110023
    ctx->pc = 0x1645a4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x1645a8: 0xffbf0020
    ctx->pc = 0x1645a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1645ac: 0xffb00000
    ctx->pc = 0x1645acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1645b0: 0x8e22a21c
    ctx->pc = 0x1645b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294943260)));
    // 0x1645b4: 0x8c430040
    ctx->pc = 0x1645b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1645b8: 0xc0585d4
    ctx->pc = 0x1645B8u;
    SET_GPR_U32(ctx, 31, 0x1645C0u);
    ctx->pc = 0x1645BCu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 0));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1645C0u; }
        else if (ctx->pc != 0x1645C0u) { ctx->pc = 0x1645C0u; }
    }
    if (ctx->pc != 0x1645C0u) { return; }
    ctx->pc = 0x1645C0u;
    // 0x1645c0: 0x40282d
    ctx->pc = 0x1645c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645c4: 0x3c090023
    ctx->pc = 0x1645c4u;
    SET_GPR_U32(ctx, 9, ((uint32_t)35 << 16));
    // 0x1645c8: 0x30a4000f
    ctx->pc = 0x1645c8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), 15));
    // 0x1645cc: 0x51902
    ctx->pc = 0x1645ccu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 5), 4));
    // 0x1645d0: 0x51202
    ctx->pc = 0x1645d0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 8));
    // 0x1645d4: 0x54502
    ctx->pc = 0x1645d4u;
    SET_GPR_U32(ctx, 8, SRL32(GPR_U32(ctx, 5), 20));
    // 0x1645d8: 0x30420fff
    ctx->pc = 0x1645d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
    // 0x1645dc: 0x3063000f
    ctx->pc = 0x1645dcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x1645e0: 0x3c050023
    ctx->pc = 0x1645e0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x1645e4: 0x3c070023
    ctx->pc = 0x1645e4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)35 << 16));
    // 0x1645e8: 0x3c060023
    ctx->pc = 0x1645e8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x1645ec: 0xad24a374
    ctx->pc = 0x1645ecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294943604), GPR_U32(ctx, 4));
    // 0x1645f0: 0xaca3a370
    ctx->pc = 0x1645f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294943600), GPR_U32(ctx, 3));
    // 0x1645f4: 0x28440af1
    ctx->pc = 0x1645f4u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 2801));
    // 0x1645f8: 0xacc8a360
    ctx->pc = 0x1645f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294943584), GPR_U32(ctx, 8));
    // 0x1645fc: 0x14800004
    ctx->pc = 0x1645FCu;
    {
        const bool branch_taken_0x1645fc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x164600u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294943588), GPR_U32(ctx, 2));
        if (branch_taken_0x1645fc) {
            ctx->pc = 0x164610u;
            goto label_164610;
        }
    }
    ctx->pc = 0x164604u;
    // 0x164604: 0x3c04002c
    ctx->pc = 0x164604u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x164608: 0xc059112
    ctx->pc = 0x164608u;
    SET_GPR_U32(ctx, 31, 0x164610u);
    ctx->pc = 0x16460Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938184));
    ctx->pc = 0x164448u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x164448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164610u; }
        else if (ctx->pc != 0x164610u) { ctx->pc = 0x164610u; }
    }
    if (ctx->pc != 0x164610u) { return; }
    ctx->pc = 0x164610u;
label_164610:
    // 0x164610: 0x2404001e
    ctx->pc = 0x164610u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30));
    // 0x164614: 0xc0585d4
    ctx->pc = 0x164614u;
    SET_GPR_U32(ctx, 31, 0x16461Cu);
    ctx->pc = 0x164618u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16461Cu; }
        else if (ctx->pc != 0x16461Cu) { ctx->pc = 0x16461Cu; }
    }
    if (ctx->pc != 0x16461Cu) { return; }
    ctx->pc = 0x16461Cu;
    // 0x16461c: 0x40282d
    ctx->pc = 0x16461cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164620: 0x3c040023
    ctx->pc = 0x164620u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x164624: 0x51042
    ctx->pc = 0x164624u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 1));
    // 0x164628: 0x53b02
    ctx->pc = 0x164628u;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 5), 12));
    // 0x16462c: 0x30a30001
    ctx->pc = 0x16462cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 1));
    // 0x164630: 0x304203ff
    ctx->pc = 0x164630u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1023));
    // 0x164634: 0x3c050023
    ctx->pc = 0x164634u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x164638: 0x3c060023
    ctx->pc = 0x164638u;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x16463c: 0xac83a380
    ctx->pc = 0x16463cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294943616), GPR_U32(ctx, 3));
    // 0x164640: 0x24040001
    ctx->pc = 0x164640u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x164644: 0x0
    ctx->pc = 0x164644u;
    // NOP
    // 0x164648: 0xc0585d4
    ctx->pc = 0x164648u;
    SET_GPR_U32(ctx, 31, 0x164650u);
    ctx->pc = 0x16464Cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294943608), GPR_U32(ctx, 7));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164650u; }
        else if (ctx->pc != 0x164650u) { ctx->pc = 0x164650u; }
    }
    if (ctx->pc != 0x164650u) { return; }
    ctx->pc = 0x164650u;
    // 0x164650: 0x10400009
    ctx->pc = 0x164650u;
    {
        const bool branch_taken_0x164650 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x164654u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294945504), GPR_U32(ctx, 2));
        if (branch_taken_0x164650) {
            ctx->pc = 0x164678u;
            goto label_164678;
        }
    }
    ctx->pc = 0x164658u;
    // 0x164658: 0xc05847c
    ctx->pc = 0x164658u;
    SET_GPR_U32(ctx, 31, 0x164660u);
    ctx->pc = 0x1611F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x1611f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164660u; }
        else if (ctx->pc != 0x164660u) { ctx->pc = 0x164660u; }
    }
    if (ctx->pc != 0x164660u) { return; }
    ctx->pc = 0x164660u;
    // 0x164660: 0xc058470
    ctx->pc = 0x164660u;
    SET_GPR_U32(ctx, 31, 0x164668u);
    ctx->pc = 0x164664u;
    SET_GPR_U32(ctx, 4, ((uint32_t)20480 << 16));
    ctx->pc = 0x1611C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x1611c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164668u; }
        else if (ctx->pc != 0x164668u) { ctx->pc = 0x164668u; }
    }
    if (ctx->pc != 0x164668u) { return; }
    ctx->pc = 0x164668u;
    // 0x164668: 0xc05847c
    ctx->pc = 0x164668u;
    SET_GPR_U32(ctx, 31, 0x164670u);
    ctx->pc = 0x1611F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x1611f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164670u; }
        else if (ctx->pc != 0x164670u) { ctx->pc = 0x164670u; }
    }
    if (ctx->pc != 0x164670u) { return; }
    ctx->pc = 0x164670u;
    // 0x164670: 0x10000006
    ctx->pc = 0x164670u;
    {
        const bool branch_taken_0x164670 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x164674u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x164670) {
            ctx->pc = 0x16468Cu;
            goto label_16468c;
        }
    }
    ctx->pc = 0x164678u;
label_164678:
    // 0x164678: 0x3c050023
    ctx->pc = 0x164678u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x16467c: 0x3c045000
    ctx->pc = 0x16467cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)20480 << 16));
    // 0x164680: 0xc0592c8
    ctx->pc = 0x164680u;
    SET_GPR_U32(ctx, 31, 0x164688u);
    ctx->pc = 0x164684u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294943424));
    ctx->pc = 0x164B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        _setDefaultQM_0x164b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164688u; }
        else if (ctx->pc != 0x164688u) { ctx->pc = 0x164688u; }
    }
    if (ctx->pc != 0x164688u) { return; }
    ctx->pc = 0x164688u;
    // 0x164688: 0x24040001
    ctx->pc = 0x164688u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_16468c:
    // 0x16468c: 0xc0585d4
    ctx->pc = 0x16468Cu;
    SET_GPR_U32(ctx, 31, 0x164694u);
    ctx->pc = 0x164690u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164694u; }
        else if (ctx->pc != 0x164694u) { ctx->pc = 0x164694u; }
    }
    if (ctx->pc != 0x164694u) { return; }
    ctx->pc = 0x164694u;
    // 0x164694: 0x10400009
    ctx->pc = 0x164694u;
    {
        const bool branch_taken_0x164694 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x164694) {
            ctx->pc = 0x1646BCu;
            goto label_1646bc;
        }
    }
    ctx->pc = 0x16469Cu;
    // 0x16469c: 0xc05847c
    ctx->pc = 0x16469Cu;
    SET_GPR_U32(ctx, 31, 0x1646A4u);
    ctx->pc = 0x1611F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x1611f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1646A4u; }
        else if (ctx->pc != 0x1646A4u) { ctx->pc = 0x1646A4u; }
    }
    if (ctx->pc != 0x1646A4u) { return; }
    ctx->pc = 0x1646A4u;
    // 0x1646a4: 0xc058470
    ctx->pc = 0x1646A4u;
    SET_GPR_U32(ctx, 31, 0x1646ACu);
    ctx->pc = 0x1646A8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)22528 << 16));
    ctx->pc = 0x1611C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x1611c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1646ACu; }
        else if (ctx->pc != 0x1646ACu) { ctx->pc = 0x1646ACu; }
    }
    if (ctx->pc != 0x1646ACu) { return; }
    ctx->pc = 0x1646ACu;
    // 0x1646ac: 0xc05847c
    ctx->pc = 0x1646ACu;
    SET_GPR_U32(ctx, 31, 0x1646B4u);
    ctx->pc = 0x1611F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x1611f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1646B4u; }
        else if (ctx->pc != 0x1646B4u) { ctx->pc = 0x1646B4u; }
    }
    if (ctx->pc != 0x1646B4u) { return; }
    ctx->pc = 0x1646B4u;
    // 0x1646b4: 0x10000005
    ctx->pc = 0x1646B4u;
    {
        const bool branch_taken_0x1646b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1646b4) {
            ctx->pc = 0x1646CCu;
            goto label_1646cc;
        }
    }
    ctx->pc = 0x1646BCu;
label_1646bc:
    // 0x1646bc: 0x3c050023
    ctx->pc = 0x1646bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x1646c0: 0x3c045800
    ctx->pc = 0x1646c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)22528 << 16));
    // 0x1646c4: 0xc0592c8
    ctx->pc = 0x1646C4u;
    SET_GPR_U32(ctx, 31, 0x1646CCu);
    ctx->pc = 0x1646C8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294943488));
    ctx->pc = 0x164B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        _setDefaultQM_0x164b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1646CCu; }
        else if (ctx->pc != 0x1646CCu) { ctx->pc = 0x1646CCu; }
    }
    if (ctx->pc != 0x1646CCu) { return; }
    ctx->pc = 0x1646CCu;
label_1646cc:
    // 0x1646cc: 0xc0586e2
    ctx->pc = 0x1646CCu;
    SET_GPR_U32(ctx, 31, 0x1646D4u);
    ctx->pc = 0x161B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        _extensionAndUserData_0x161b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1646D4u; }
        else if (ctx->pc != 0x1646D4u) { ctx->pc = 0x1646D4u; }
    }
    if (ctx->pc != 0x1646D4u) { return; }
    ctx->pc = 0x1646D4u;
    // 0x1646d4: 0x8e24a21c
    ctx->pc = 0x1646d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294943260)));
    // 0x1646d8: 0xdfbf0020
    ctx->pc = 0x1646d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1646dc: 0xdfb10010
    ctx->pc = 0x1646dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1646e0: 0xdfb00000
    ctx->pc = 0x1646e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1646e4: 0x80591bc
    ctx->pc = 0x1646E4u;
    ctx->pc = 0x1646E8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1646F0u;
    _initSeq_0x1646f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1646ECu;
}
