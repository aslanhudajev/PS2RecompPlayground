#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterInitChild
// Address: 0x293a60 - 0x293c10
void CritterInitChild_0x293a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x293a60u;

    // 0x293a60: 0x27bdffc0
    ctx->pc = 0x293a60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x293a64: 0xffbf0030
    ctx->pc = 0x293a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x293a68: 0xffb20020
    ctx->pc = 0x293a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x293a6c: 0xffb10010
    ctx->pc = 0x293a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x293a70: 0xffb00000
    ctx->pc = 0x293a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x293a74: 0x80802d
    ctx->pc = 0x293a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a78: 0xa0882d
    ctx->pc = 0x293a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a7c: 0x8e220004
    ctx->pc = 0x293a7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293a80: 0x8c450138
    ctx->pc = 0x293a80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x293a84: 0x26040080
    ctx->pc = 0x293a84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 128));
    // 0x293a88: 0x26230080
    ctx->pc = 0x293a88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 128));
    // 0x293a8c: 0x641025
    ctx->pc = 0x293a8cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x293a90: 0x30420007
    ctx->pc = 0x293a90u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x293a94: 0x1040001a
    ctx->pc = 0x293A94u;
    {
        const bool branch_taken_0x293a94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x293A98u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        if (branch_taken_0x293a94) {
            ctx->pc = 0x293B00u;
            goto label_293b00;
        }
    }
    ctx->pc = 0x293A9Cu;
    // 0x293a9c: 0x262200c0
    ctx->pc = 0x293a9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 192));
label_293aa0:
    // 0x293aa0: 0x68660007
    ctx->pc = 0x293aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x293aa4: 0x6c660000
    ctx->pc = 0x293aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x293aa8: 0x6867000f
    ctx->pc = 0x293aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x293aac: 0x6c670008
    ctx->pc = 0x293aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x293ab0: 0x68680017
    ctx->pc = 0x293ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x293ab4: 0x6c680010
    ctx->pc = 0x293ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x293ab8: 0x6869001f
    ctx->pc = 0x293ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x293abc: 0x6c690018
    ctx->pc = 0x293abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x293ac0: 0xb0860007
    ctx->pc = 0x293ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x293ac4: 0xb4860000
    ctx->pc = 0x293ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x293ac8: 0xb087000f
    ctx->pc = 0x293ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x293acc: 0xb4870008
    ctx->pc = 0x293accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x293ad0: 0xb0880017
    ctx->pc = 0x293ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x293ad4: 0xb4880010
    ctx->pc = 0x293ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x293ad8: 0xb089001f
    ctx->pc = 0x293ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x293adc: 0xb4890018
    ctx->pc = 0x293adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x293ae0: 0x24630020
    ctx->pc = 0x293ae0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x293ae4: 0x24840020
    ctx->pc = 0x293ae4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x293ae8: 0x0
    ctx->pc = 0x293ae8u;
    // NOP
    // 0x293aec: 0x0
    ctx->pc = 0x293aecu;
    // NOP
    // 0x293af0: 0x1462ffeb
    ctx->pc = 0x293AF0u;
    {
        const bool branch_taken_0x293af0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x293af0) {
            ctx->pc = 0x293AA0u;
            goto label_293aa0;
        }
    }
    ctx->pc = 0x293AF8u;
    // 0x293af8: 0x10000010
    ctx->pc = 0x293AF8u;
    {
        const bool branch_taken_0x293af8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x293af8) {
            ctx->pc = 0x293B3Cu;
            goto label_293b3c;
        }
    }
    ctx->pc = 0x293B00u;
label_293b00:
    // 0x293b00: 0x24620040
    ctx->pc = 0x293b00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 64));
label_293b04:
    // 0x293b04: 0xdc660000
    ctx->pc = 0x293b04u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x293b08: 0xdc670008
    ctx->pc = 0x293b08u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x293b0c: 0xdc680010
    ctx->pc = 0x293b0cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x293b10: 0xdc690018
    ctx->pc = 0x293b10u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x293b14: 0xfc860000
    ctx->pc = 0x293b14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x293b18: 0xfc870008
    ctx->pc = 0x293b18u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x293b1c: 0xfc880010
    ctx->pc = 0x293b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x293b20: 0xfc890018
    ctx->pc = 0x293b20u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x293b24: 0x24630020
    ctx->pc = 0x293b24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x293b28: 0x24840020
    ctx->pc = 0x293b28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x293b2c: 0x0
    ctx->pc = 0x293b2cu;
    // NOP
    // 0x293b30: 0x0
    ctx->pc = 0x293b30u;
    // NOP
    // 0x293b34: 0x1462fff3
    ctx->pc = 0x293B34u;
    {
        const bool branch_taken_0x293b34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x293b34) {
            ctx->pc = 0x293B04u;
            goto label_293b04;
        }
    }
    ctx->pc = 0x293B3Cu;
label_293b3c:
    // 0x293b3c: 0x68620007
    ctx->pc = 0x293b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x293b40: 0x6c620000
    ctx->pc = 0x293b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x293b44: 0xb0820007
    ctx->pc = 0x293b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x293b48: 0xb4820000
    ctx->pc = 0x293b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x293b4c: 0x8e060004
    ctx->pc = 0x293b4cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x293b50: 0x8ca4000c
    ctx->pc = 0x293b50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x293b54: 0x8ca50010
    ctx->pc = 0x293b54u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x293b58: 0x24c60010
    ctx->pc = 0x293b58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x293b5c: 0xc084bfe
    ctx->pc = 0x293B5Cu;
    SET_GPR_U32(ctx, 31, 0x293B64u);
    ctx->pc = 0x293B60u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x212FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeFindNodeIdx_0x212ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293B64u; }
    }
    if (ctx->pc != 0x293B64u) { return; }
    ctx->pc = 0x293B64u;
    // 0x293b64: 0x24030028
    ctx->pc = 0x293b64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 40));
    // 0x293b68: 0x432018
    ctx->pc = 0x293b68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x293b6c: 0x8e2200c0
    ctx->pc = 0x293b6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x293b70: 0x822021
    ctx->pc = 0x293b70u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x293b74: 0xae040080
    ctx->pc = 0x293b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 4));
    // 0x293b78: 0x282d
    ctx->pc = 0x293b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b7c: 0x302d
    ctx->pc = 0x293b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b80: 0xc084940
    ctx->pc = 0x293B80u;
    SET_GPR_U32(ctx, 31, 0x293B88u);
    ctx->pc = 0x293B84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212500u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeNodeSetParent_0x212500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293B88u; }
    }
    if (ctx->pc != 0x293B88u) { return; }
    ctx->pc = 0x293B88u;
    // 0x293b88: 0x8e020080
    ctx->pc = 0x293b88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x293b8c: 0x8c420000
    ctx->pc = 0x293b8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x293b90: 0xae0200cc
    ctx->pc = 0x293b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
    // 0x293b94: 0x200202d
    ctx->pc = 0x293b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b98: 0x86450056
    ctx->pc = 0x293b98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 86)));
    // 0x293b9c: 0xc0a47e0
    ctx->pc = 0x293B9Cu;
    SET_GPR_U32(ctx, 31, 0x293BA4u);
    ctx->pc = 0x293BA0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x291F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetNode_0x291f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293BA4u; }
    }
    if (ctx->pc != 0x293BA4u) { return; }
    ctx->pc = 0x293BA4u;
    // 0x293ba4: 0x40182d
    ctx->pc = 0x293ba4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293ba8: 0xae0300d4
    ctx->pc = 0x293ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x293bac: 0x8e42005c
    ctx->pc = 0x293bacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x293bb0: 0x30420010
    ctx->pc = 0x293bb0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x293bb4: 0x10400007
    ctx->pc = 0x293BB4u;
    {
        const bool branch_taken_0x293bb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x293BB8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x293bb4) {
            ctx->pc = 0x293BD4u;
            goto label_293bd4;
        }
    }
    ctx->pc = 0x293BBCu;
    // 0x293bbc: 0x50600006
    ctx->pc = 0x293BBCu;
    {
        const bool branch_taken_0x293bbc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x293bbc) {
            ctx->pc = 0x293BC0u;
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
            ctx->pc = 0x293BD8u;
            goto label_293bd8;
        }
    }
    ctx->pc = 0x293BC4u;
    // 0x293bc4: 0x8c620074
    ctx->pc = 0x293bc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x293bc8: 0x54400002
    ctx->pc = 0x293BC8u;
    {
        const bool branch_taken_0x293bc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x293bc8) {
            ctx->pc = 0x293BCCu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
            ctx->pc = 0x293BD4u;
            goto label_293bd4;
        }
    }
    ctx->pc = 0x293BD0u;
    // 0x293bd0: 0x200202d
    ctx->pc = 0x293bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_293bd4:
    // 0x293bd4: 0x86450058
    ctx->pc = 0x293bd4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
label_293bd8:
    // 0x293bd8: 0xc0a47e0
    ctx->pc = 0x293BD8u;
    SET_GPR_U32(ctx, 31, 0x293BE0u);
    ctx->pc = 0x293BDCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x291F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetNode_0x291f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293BE0u; }
    }
    if (ctx->pc != 0x293BE0u) { return; }
    ctx->pc = 0x293BE0u;
    // 0x293be0: 0xae0200d8
    ctx->pc = 0x293be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x293be4: 0x200202d
    ctx->pc = 0x293be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293be8: 0x8645005a
    ctx->pc = 0x293be8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 90)));
    // 0x293bec: 0xc0a47e0
    ctx->pc = 0x293BECu;
    SET_GPR_U32(ctx, 31, 0x293BF4u);
    ctx->pc = 0x293BF0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x291F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetNode_0x291f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293BF4u; }
    }
    if (ctx->pc != 0x293BF4u) { return; }
    ctx->pc = 0x293BF4u;
    // 0x293bf4: 0xae0200e8
    ctx->pc = 0x293bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x293bf8: 0xdfbf0030
    ctx->pc = 0x293bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293bfc: 0xdfb20020
    ctx->pc = 0x293bfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293c00: 0xdfb10010
    ctx->pc = 0x293c00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293c04: 0xdfb00000
    ctx->pc = 0x293c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293c08: 0x3e00008
    ctx->pc = 0x293C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293C0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x293AA0u: goto label_293aa0;
            case 0x293B00u: goto label_293b00;
            case 0x293B04u: goto label_293b04;
            case 0x293B3Cu: goto label_293b3c;
            case 0x293BD4u: goto label_293bd4;
            case 0x293BD8u: goto label_293bd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x293C10u;
}
