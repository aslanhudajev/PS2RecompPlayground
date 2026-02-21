#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sequenceHeader
// Address: 0x2eeaa8 - 0x2eebfc
void _sequenceHeader_0x2eeaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2eeaa8u;

    // 0x2eeaa8: 0x27bdffd0
    ctx->pc = 0x2eeaa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2eeaac: 0x24040020
    ctx->pc = 0x2eeaacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2eeab0: 0xffb10010
    ctx->pc = 0x2eeab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2eeab4: 0x3c11003a
    ctx->pc = 0x2eeab4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2eeab8: 0xffbf0020
    ctx->pc = 0x2eeab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2eeabc: 0xffb00000
    ctx->pc = 0x2eeabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eeac0: 0x8e223024
    ctx->pc = 0x2eeac0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12324)));
    // 0x2eeac4: 0x8c430040
    ctx->pc = 0x2eeac4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2eeac8: 0xc0bca32
    ctx->pc = 0x2EEAC8u;
    SET_GPR_U32(ctx, 31, 0x2EEAD0u);
    ctx->pc = 0x2EEACCu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 0));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEAD0u; }
    }
    if (ctx->pc != 0x2EEAD0u) { return; }
    ctx->pc = 0x2EEAD0u;
    // 0x2eead0: 0x40282d
    ctx->pc = 0x2eead0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eead4: 0x3c09003a
    ctx->pc = 0x2eead4u;
    SET_GPR_U32(ctx, 9, ((uint32_t)58 << 16));
    // 0x2eead8: 0x30a4000f
    ctx->pc = 0x2eead8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), 15));
    // 0x2eeadc: 0x51902
    ctx->pc = 0x2eeadcu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 5), 4));
    // 0x2eeae0: 0x51202
    ctx->pc = 0x2eeae0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 8));
    // 0x2eeae4: 0x54502
    ctx->pc = 0x2eeae4u;
    SET_GPR_U32(ctx, 8, SRL32(GPR_U32(ctx, 5), 20));
    // 0x2eeae8: 0x30420fff
    ctx->pc = 0x2eeae8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
    // 0x2eeaec: 0x3063000f
    ctx->pc = 0x2eeaecu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x2eeaf0: 0x3c05003a
    ctx->pc = 0x2eeaf0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2eeaf4: 0x3c07003a
    ctx->pc = 0x2eeaf4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x2eeaf8: 0x3c06003a
    ctx->pc = 0x2eeaf8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2eeafc: 0xad243174
    ctx->pc = 0x2eeafcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12660), GPR_U32(ctx, 4));
    // 0x2eeb00: 0xaca33170
    ctx->pc = 0x2eeb00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12656), GPR_U32(ctx, 3));
    // 0x2eeb04: 0x28440af1
    ctx->pc = 0x2eeb04u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 2801));
    // 0x2eeb08: 0xacc83160
    ctx->pc = 0x2eeb08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12640), GPR_U32(ctx, 8));
    // 0x2eeb0c: 0x14800004
    ctx->pc = 0x2EEB0Cu;
    {
        const bool branch_taken_0x2eeb0c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2EEB10u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 12644), GPR_U32(ctx, 2));
        if (branch_taken_0x2eeb0c) {
            ctx->pc = 0x2EEB20u;
            goto label_2eeb20;
        }
    }
    ctx->pc = 0x2EEB14u;
    // 0x2eeb14: 0x3c04003c
    ctx->pc = 0x2eeb14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2eeb18: 0xc0bba56
    ctx->pc = 0x2EEB18u;
    SET_GPR_U32(ctx, 31, 0x2EEB20u);
    ctx->pc = 0x2EEB1Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942152));
    ctx->pc = 0x2EE958u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x2ee958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEB20u; }
    }
    if (ctx->pc != 0x2EEB20u) { return; }
    ctx->pc = 0x2EEB20u;
label_2eeb20:
    // 0x2eeb20: 0x2404001e
    ctx->pc = 0x2eeb20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30));
    // 0x2eeb24: 0xc0bca32
    ctx->pc = 0x2EEB24u;
    SET_GPR_U32(ctx, 31, 0x2EEB2Cu);
    ctx->pc = 0x2EEB28u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEB2Cu; }
    }
    if (ctx->pc != 0x2EEB2Cu) { return; }
    ctx->pc = 0x2EEB2Cu;
    // 0x2eeb2c: 0x40282d
    ctx->pc = 0x2eeb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeb30: 0x3c04003a
    ctx->pc = 0x2eeb30u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2eeb34: 0x51042
    ctx->pc = 0x2eeb34u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 1));
    // 0x2eeb38: 0x53b02
    ctx->pc = 0x2eeb38u;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 5), 12));
    // 0x2eeb3c: 0x30a30001
    ctx->pc = 0x2eeb3cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 1));
    // 0x2eeb40: 0x304203ff
    ctx->pc = 0x2eeb40u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1023));
    // 0x2eeb44: 0x3c05003a
    ctx->pc = 0x2eeb44u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2eeb48: 0x3c06003a
    ctx->pc = 0x2eeb48u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2eeb4c: 0xac833180
    ctx->pc = 0x2eeb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12672), GPR_U32(ctx, 3));
    // 0x2eeb50: 0x24040001
    ctx->pc = 0x2eeb50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eeb54: 0xaca2317c
    ctx->pc = 0x2eeb54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12668), GPR_U32(ctx, 2));
    // 0x2eeb58: 0xc0bca32
    ctx->pc = 0x2EEB58u;
    SET_GPR_U32(ctx, 31, 0x2EEB60u);
    ctx->pc = 0x2EEB5Cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12664), GPR_U32(ctx, 7));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEB60u; }
    }
    if (ctx->pc != 0x2EEB60u) { return; }
    ctx->pc = 0x2EEB60u;
    // 0x2eeb60: 0x10400009
    ctx->pc = 0x2EEB60u;
    {
        const bool branch_taken_0x2eeb60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EEB64u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 14560), GPR_U32(ctx, 2));
        if (branch_taken_0x2eeb60) {
            ctx->pc = 0x2EEB88u;
            goto label_2eeb88;
        }
    }
    ctx->pc = 0x2EEB68u;
    // 0x2eeb68: 0xc0bc8da
    ctx->pc = 0x2EEB68u;
    SET_GPR_U32(ctx, 31, 0x2EEB70u);
    ctx->pc = 0x2F2368u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x2f2368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEB70u; }
    }
    if (ctx->pc != 0x2EEB70u) { return; }
    ctx->pc = 0x2EEB70u;
    // 0x2eeb70: 0xc0bc8ce
    ctx->pc = 0x2EEB70u;
    SET_GPR_U32(ctx, 31, 0x2EEB78u);
    ctx->pc = 0x2EEB74u;
    SET_GPR_U32(ctx, 4, ((uint32_t)20480 << 16));
    ctx->pc = 0x2F2338u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x2f2338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEB78u; }
    }
    if (ctx->pc != 0x2EEB78u) { return; }
    ctx->pc = 0x2EEB78u;
    // 0x2eeb78: 0xc0bc8da
    ctx->pc = 0x2EEB78u;
    SET_GPR_U32(ctx, 31, 0x2EEB80u);
    ctx->pc = 0x2F2368u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x2f2368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEB80u; }
    }
    if (ctx->pc != 0x2EEB80u) { return; }
    ctx->pc = 0x2EEB80u;
    // 0x2eeb80: 0x10000006
    ctx->pc = 0x2EEB80u;
    {
        const bool branch_taken_0x2eeb80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EEB84u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2eeb80) {
            ctx->pc = 0x2EEB9Cu;
            goto label_2eeb9c;
        }
    }
    ctx->pc = 0x2EEB88u;
label_2eeb88:
    // 0x2eeb88: 0x3c05003a
    ctx->pc = 0x2eeb88u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2eeb8c: 0x3c045000
    ctx->pc = 0x2eeb8cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)20480 << 16));
    // 0x2eeb90: 0xc0bbc0c
    ctx->pc = 0x2EEB90u;
    SET_GPR_U32(ctx, 31, 0x2EEB98u);
    ctx->pc = 0x2EEB94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 12480));
    ctx->pc = 0x2EF030u;
    {
        const uint32_t __entryPc = ctx->pc;
        _setDefaultQM_0x2ef030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEB98u; }
    }
    if (ctx->pc != 0x2EEB98u) { return; }
    ctx->pc = 0x2EEB98u;
    // 0x2eeb98: 0x24040001
    ctx->pc = 0x2eeb98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_2eeb9c:
    // 0x2eeb9c: 0xc0bca32
    ctx->pc = 0x2EEB9Cu;
    SET_GPR_U32(ctx, 31, 0x2EEBA4u);
    ctx->pc = 0x2EEBA0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEBA4u; }
    }
    if (ctx->pc != 0x2EEBA4u) { return; }
    ctx->pc = 0x2EEBA4u;
    // 0x2eeba4: 0x10400009
    ctx->pc = 0x2EEBA4u;
    {
        const bool branch_taken_0x2eeba4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EEBA8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 14564), GPR_U32(ctx, 2));
        if (branch_taken_0x2eeba4) {
            ctx->pc = 0x2EEBCCu;
            goto label_2eebcc;
        }
    }
    ctx->pc = 0x2EEBACu;
    // 0x2eebac: 0xc0bc8da
    ctx->pc = 0x2EEBACu;
    SET_GPR_U32(ctx, 31, 0x2EEBB4u);
    ctx->pc = 0x2F2368u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x2f2368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEBB4u; }
    }
    if (ctx->pc != 0x2EEBB4u) { return; }
    ctx->pc = 0x2EEBB4u;
    // 0x2eebb4: 0xc0bc8ce
    ctx->pc = 0x2EEBB4u;
    SET_GPR_U32(ctx, 31, 0x2EEBBCu);
    ctx->pc = 0x2EEBB8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)22528 << 16));
    ctx->pc = 0x2F2338u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x2f2338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEBBCu; }
    }
    if (ctx->pc != 0x2EEBBCu) { return; }
    ctx->pc = 0x2EEBBCu;
    // 0x2eebbc: 0xc0bc8da
    ctx->pc = 0x2EEBBCu;
    SET_GPR_U32(ctx, 31, 0x2EEBC4u);
    ctx->pc = 0x2F2368u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x2f2368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEBC4u; }
    }
    if (ctx->pc != 0x2EEBC4u) { return; }
    ctx->pc = 0x2EEBC4u;
    // 0x2eebc4: 0x10000005
    ctx->pc = 0x2EEBC4u;
    {
        const bool branch_taken_0x2eebc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2eebc4) {
            ctx->pc = 0x2EEBDCu;
            goto label_2eebdc;
        }
    }
    ctx->pc = 0x2EEBCCu;
label_2eebcc:
    // 0x2eebcc: 0x3c05003a
    ctx->pc = 0x2eebccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2eebd0: 0x3c045800
    ctx->pc = 0x2eebd0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)22528 << 16));
    // 0x2eebd4: 0xc0bbc0c
    ctx->pc = 0x2EEBD4u;
    SET_GPR_U32(ctx, 31, 0x2EEBDCu);
    ctx->pc = 0x2EEBD8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 12544));
    ctx->pc = 0x2EF030u;
    {
        const uint32_t __entryPc = ctx->pc;
        _setDefaultQM_0x2ef030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEBDCu; }
    }
    if (ctx->pc != 0x2EEBDCu) { return; }
    ctx->pc = 0x2EEBDCu;
label_2eebdc:
    // 0x2eebdc: 0xc0bcb40
    ctx->pc = 0x2EEBDCu;
    SET_GPR_U32(ctx, 31, 0x2EEBE4u);
    ctx->pc = 0x2F2D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _extensionAndUserData_0x2f2d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEBE4u; }
    }
    if (ctx->pc != 0x2EEBE4u) { return; }
    ctx->pc = 0x2EEBE4u;
    // 0x2eebe4: 0x8e243024
    ctx->pc = 0x2eebe4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12324)));
    // 0x2eebe8: 0xdfbf0020
    ctx->pc = 0x2eebe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eebec: 0xdfb10010
    ctx->pc = 0x2eebecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eebf0: 0xdfb00000
    ctx->pc = 0x2eebf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eebf4: 0x80bbb00
    ctx->pc = 0x2EEBF4u;
    ctx->pc = 0x2EEBF8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2EEC00u;
    _initSeq_0x2eec00(rdram, ctx, runtime); return;
    ctx->pc = 0x2EEBFCu;
}
