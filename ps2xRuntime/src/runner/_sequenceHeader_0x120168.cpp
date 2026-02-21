#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sequenceHeader
// Address: 0x120168 - 0x1202bc
void _sequenceHeader_0x120168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x120168u;

    // 0x120168: 0x27bdffd0
    ctx->pc = 0x120168u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12016c: 0x24040020
    ctx->pc = 0x12016cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    // 0x120170: 0xffb10010
    ctx->pc = 0x120170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x120174: 0x3c110017
    ctx->pc = 0x120174u;
    SET_GPR_U32(ctx, 17, ((uint32_t)23 << 16));
    // 0x120178: 0xffbf0020
    ctx->pc = 0x120178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12017c: 0xffb00000
    ctx->pc = 0x12017cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x120180: 0x8e2217bc
    ctx->pc = 0x120180u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 6076)));
    // 0x120184: 0x8c430040
    ctx->pc = 0x120184u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x120188: 0xc048fdc
    ctx->pc = 0x120188u;
    SET_GPR_U32(ctx, 31, 0x120190u);
    ctx->pc = 0x12018Cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 0));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120190u; }
    }
    if (ctx->pc != 0x120190u) { return; }
    ctx->pc = 0x120190u;
    // 0x120190: 0x40282d
    ctx->pc = 0x120190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120194: 0x3c090017
    ctx->pc = 0x120194u;
    SET_GPR_U32(ctx, 9, ((uint32_t)23 << 16));
    // 0x120198: 0x30a4000f
    ctx->pc = 0x120198u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), 15));
    // 0x12019c: 0x51902
    ctx->pc = 0x12019cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 5), 4));
    // 0x1201a0: 0x51202
    ctx->pc = 0x1201a0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 8));
    // 0x1201a4: 0x54502
    ctx->pc = 0x1201a4u;
    SET_GPR_U32(ctx, 8, SRL32(GPR_U32(ctx, 5), 20));
    // 0x1201a8: 0x30420fff
    ctx->pc = 0x1201a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
    // 0x1201ac: 0x3063000f
    ctx->pc = 0x1201acu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x1201b0: 0x3c050017
    ctx->pc = 0x1201b0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x1201b4: 0x3c070017
    ctx->pc = 0x1201b4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)23 << 16));
    // 0x1201b8: 0x3c060017
    ctx->pc = 0x1201b8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)23 << 16));
    // 0x1201bc: 0xad241934
    ctx->pc = 0x1201bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 6452), GPR_U32(ctx, 4));
    // 0x1201c0: 0xaca31930
    ctx->pc = 0x1201c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6448), GPR_U32(ctx, 3));
    // 0x1201c4: 0x28440af1
    ctx->pc = 0x1201c4u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 2801));
    // 0x1201c8: 0xacc81920
    ctx->pc = 0x1201c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6432), GPR_U32(ctx, 8));
    // 0x1201cc: 0x14800004
    ctx->pc = 0x1201CCu;
    {
        const bool branch_taken_0x1201cc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1201D0u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 6436), GPR_U32(ctx, 2));
        if (branch_taken_0x1201cc) {
            ctx->pc = 0x1201E0u;
            goto label_1201e0;
        }
    }
    ctx->pc = 0x1201D4u;
    // 0x1201d4: 0x3c040017
    ctx->pc = 0x1201d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1201d8: 0xc048006
    ctx->pc = 0x1201D8u;
    SET_GPR_U32(ctx, 31, 0x1201E0u);
    ctx->pc = 0x1201DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19688));
    ctx->pc = 0x120018u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1201E0u; }
    }
    if (ctx->pc != 0x1201E0u) { return; }
    ctx->pc = 0x1201E0u;
label_1201e0:
    // 0x1201e0: 0x2404001e
    ctx->pc = 0x1201e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30));
    // 0x1201e4: 0xc048fdc
    ctx->pc = 0x1201E4u;
    SET_GPR_U32(ctx, 31, 0x1201ECu);
    ctx->pc = 0x1201E8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1201ECu; }
    }
    if (ctx->pc != 0x1201ECu) { return; }
    ctx->pc = 0x1201ECu;
    // 0x1201ec: 0x40282d
    ctx->pc = 0x1201ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1201f0: 0x3c040017
    ctx->pc = 0x1201f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1201f4: 0x51042
    ctx->pc = 0x1201f4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 1));
    // 0x1201f8: 0x53b02
    ctx->pc = 0x1201f8u;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 5), 12));
    // 0x1201fc: 0x30a30001
    ctx->pc = 0x1201fcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 1));
    // 0x120200: 0x304203ff
    ctx->pc = 0x120200u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1023));
    // 0x120204: 0x3c050017
    ctx->pc = 0x120204u;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x120208: 0x3c060017
    ctx->pc = 0x120208u;
    SET_GPR_U32(ctx, 6, ((uint32_t)23 << 16));
    // 0x12020c: 0xac831940
    ctx->pc = 0x12020cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6464), GPR_U32(ctx, 3));
    // 0x120210: 0x24040001
    ctx->pc = 0x120210u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x120214: 0xaca2193c
    ctx->pc = 0x120214u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6460), GPR_U32(ctx, 2));
    // 0x120218: 0xc048fdc
    ctx->pc = 0x120218u;
    SET_GPR_U32(ctx, 31, 0x120220u);
    ctx->pc = 0x12021Cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6456), GPR_U32(ctx, 7));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120220u; }
    }
    if (ctx->pc != 0x120220u) { return; }
    ctx->pc = 0x120220u;
    // 0x120220: 0x10400009
    ctx->pc = 0x120220u;
    {
        const bool branch_taken_0x120220 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x120224u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8352), GPR_U32(ctx, 2));
        if (branch_taken_0x120220) {
            ctx->pc = 0x120248u;
            goto label_120248;
        }
    }
    ctx->pc = 0x120228u;
    // 0x120228: 0xc048e84
    ctx->pc = 0x120228u;
    SET_GPR_U32(ctx, 31, 0x120230u);
    ctx->pc = 0x123A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120230u; }
    }
    if (ctx->pc != 0x120230u) { return; }
    ctx->pc = 0x120230u;
    // 0x120230: 0xc048e78
    ctx->pc = 0x120230u;
    SET_GPR_U32(ctx, 31, 0x120238u);
    ctx->pc = 0x120234u;
    SET_GPR_U32(ctx, 4, ((uint32_t)20480 << 16));
    ctx->pc = 0x1239E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x1239e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120238u; }
    }
    if (ctx->pc != 0x120238u) { return; }
    ctx->pc = 0x120238u;
    // 0x120238: 0xc048e84
    ctx->pc = 0x120238u;
    SET_GPR_U32(ctx, 31, 0x120240u);
    ctx->pc = 0x123A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120240u; }
    }
    if (ctx->pc != 0x120240u) { return; }
    ctx->pc = 0x120240u;
    // 0x120240: 0x10000006
    ctx->pc = 0x120240u;
    {
        const bool branch_taken_0x120240 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x120244u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x120240) {
            ctx->pc = 0x12025Cu;
            goto label_12025c;
        }
    }
    ctx->pc = 0x120248u;
label_120248:
    // 0x120248: 0x3c050017
    ctx->pc = 0x120248u;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x12024c: 0x3c045000
    ctx->pc = 0x12024cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)20480 << 16));
    // 0x120250: 0xc0481bc
    ctx->pc = 0x120250u;
    SET_GPR_U32(ctx, 31, 0x120258u);
    ctx->pc = 0x120254u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 6272));
    ctx->pc = 0x1206F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _setDefaultQM_0x1206f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120258u; }
    }
    if (ctx->pc != 0x120258u) { return; }
    ctx->pc = 0x120258u;
    // 0x120258: 0x24040001
    ctx->pc = 0x120258u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_12025c:
    // 0x12025c: 0xc048fdc
    ctx->pc = 0x12025Cu;
    SET_GPR_U32(ctx, 31, 0x120264u);
    ctx->pc = 0x120260u;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120264u; }
    }
    if (ctx->pc != 0x120264u) { return; }
    ctx->pc = 0x120264u;
    // 0x120264: 0x10400009
    ctx->pc = 0x120264u;
    {
        const bool branch_taken_0x120264 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x120268u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8356), GPR_U32(ctx, 2));
        if (branch_taken_0x120264) {
            ctx->pc = 0x12028Cu;
            goto label_12028c;
        }
    }
    ctx->pc = 0x12026Cu;
    // 0x12026c: 0xc048e84
    ctx->pc = 0x12026Cu;
    SET_GPR_U32(ctx, 31, 0x120274u);
    ctx->pc = 0x123A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120274u; }
    }
    if (ctx->pc != 0x120274u) { return; }
    ctx->pc = 0x120274u;
    // 0x120274: 0xc048e78
    ctx->pc = 0x120274u;
    SET_GPR_U32(ctx, 31, 0x12027Cu);
    ctx->pc = 0x120278u;
    SET_GPR_U32(ctx, 4, ((uint32_t)22528 << 16));
    ctx->pc = 0x1239E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x1239e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12027Cu; }
    }
    if (ctx->pc != 0x12027Cu) { return; }
    ctx->pc = 0x12027Cu;
    // 0x12027c: 0xc048e84
    ctx->pc = 0x12027Cu;
    SET_GPR_U32(ctx, 31, 0x120284u);
    ctx->pc = 0x123A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120284u; }
    }
    if (ctx->pc != 0x120284u) { return; }
    ctx->pc = 0x120284u;
    // 0x120284: 0x10000005
    ctx->pc = 0x120284u;
    {
        const bool branch_taken_0x120284 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x120284) {
            ctx->pc = 0x12029Cu;
            goto label_12029c;
        }
    }
    ctx->pc = 0x12028Cu;
label_12028c:
    // 0x12028c: 0x3c050017
    ctx->pc = 0x12028cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x120290: 0x3c045800
    ctx->pc = 0x120290u;
    SET_GPR_U32(ctx, 4, ((uint32_t)22528 << 16));
    // 0x120294: 0xc0481bc
    ctx->pc = 0x120294u;
    SET_GPR_U32(ctx, 31, 0x12029Cu);
    ctx->pc = 0x120298u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 6336));
    ctx->pc = 0x1206F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _setDefaultQM_0x1206f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12029Cu; }
    }
    if (ctx->pc != 0x12029Cu) { return; }
    ctx->pc = 0x12029Cu;
label_12029c:
    // 0x12029c: 0xc0490ea
    ctx->pc = 0x12029Cu;
    SET_GPR_U32(ctx, 31, 0x1202A4u);
    ctx->pc = 0x1243A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _extensionAndUserData_0x1243a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1202A4u; }
    }
    if (ctx->pc != 0x1202A4u) { return; }
    ctx->pc = 0x1202A4u;
    // 0x1202a4: 0x8e2417bc
    ctx->pc = 0x1202a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 6076)));
    // 0x1202a8: 0xdfbf0020
    ctx->pc = 0x1202a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1202ac: 0xdfb10010
    ctx->pc = 0x1202acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1202b0: 0xdfb00000
    ctx->pc = 0x1202b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1202b4: 0x80480b0
    ctx->pc = 0x1202B4u;
    ctx->pc = 0x1202B8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1202C0u;
    _initSeq_0x1202c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1202BCu;
}
