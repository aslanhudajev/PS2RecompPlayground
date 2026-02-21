#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _pack_header
// Address: 0x11eb10 - 0x11ec60
void _pack_header_0x11eb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11eb10u;

    // 0x11eb10: 0x27bdff80
    ctx->pc = 0x11eb10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11eb14: 0xffb60060
    ctx->pc = 0x11eb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x11eb18: 0xffb30030
    ctx->pc = 0x11eb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11eb1c: 0xa0b02d
    ctx->pc = 0x11eb1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb20: 0x80982d
    ctx->pc = 0x11eb20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb24: 0xffb50050
    ctx->pc = 0x11eb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11eb28: 0xffb40040
    ctx->pc = 0x11eb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11eb2c: 0xffb20020
    ctx->pc = 0x11eb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11eb30: 0x24050022
    ctx->pc = 0x11eb30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 34));
    // 0x11eb34: 0xffb10010
    ctx->pc = 0x11eb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11eb38: 0xffb00000
    ctx->pc = 0x11eb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11eb3c: 0xffbf0070
    ctx->pc = 0x11eb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11eb40: 0xc0497e6
    ctx->pc = 0x11EB40u;
    SET_GPR_U32(ctx, 31, 0x11EB48u);
    ctx->pc = 0x11EB44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB48u; }
    }
    if (ctx->pc != 0x11EB48u) { return; }
    ctx->pc = 0x11EB48u;
    // 0x11eb48: 0x260202d
    ctx->pc = 0x11eb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb4c: 0xc0497e6
    ctx->pc = 0x11EB4Cu;
    SET_GPR_U32(ctx, 31, 0x11EB54u);
    ctx->pc = 0x11EB50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB54u; }
    }
    if (ctx->pc != 0x11EB54u) { return; }
    ctx->pc = 0x11EB54u;
    // 0x11eb54: 0x40802d
    ctx->pc = 0x11eb54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb58: 0xc0497fa
    ctx->pc = 0x11EB58u;
    SET_GPR_U32(ctx, 31, 0x11EB60u);
    ctx->pc = 0x11EB5Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x125fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB60u; }
    }
    if (ctx->pc != 0x11EB60u) { return; }
    ctx->pc = 0x11EB60u;
    // 0x11eb60: 0x260202d
    ctx->pc = 0x11eb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb64: 0xc0497e6
    ctx->pc = 0x11EB64u;
    SET_GPR_U32(ctx, 31, 0x11EB6Cu);
    ctx->pc = 0x11EB68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB6Cu; }
    }
    if (ctx->pc != 0x11EB6Cu) { return; }
    ctx->pc = 0x11EB6Cu;
    // 0x11eb6c: 0x40882d
    ctx->pc = 0x11eb6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb70: 0xc0497fa
    ctx->pc = 0x11EB70u;
    SET_GPR_U32(ctx, 31, 0x11EB78u);
    ctx->pc = 0x11EB74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x125fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB78u; }
    }
    if (ctx->pc != 0x11EB78u) { return; }
    ctx->pc = 0x11EB78u;
    // 0x11eb78: 0x260202d
    ctx->pc = 0x11eb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb7c: 0xc0497e6
    ctx->pc = 0x11EB7Cu;
    SET_GPR_U32(ctx, 31, 0x11EB84u);
    ctx->pc = 0x11EB80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB84u; }
    }
    if (ctx->pc != 0x11EB84u) { return; }
    ctx->pc = 0x11EB84u;
    // 0x11eb84: 0x40902d
    ctx->pc = 0x11eb84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb88: 0xc0497fa
    ctx->pc = 0x11EB88u;
    SET_GPR_U32(ctx, 31, 0x11EB90u);
    ctx->pc = 0x11EB8Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x125fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB90u; }
    }
    if (ctx->pc != 0x11EB90u) { return; }
    ctx->pc = 0x11EB90u;
    // 0x11eb90: 0x260202d
    ctx->pc = 0x11eb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb94: 0xc0497e6
    ctx->pc = 0x11EB94u;
    SET_GPR_U32(ctx, 31, 0x11EB9Cu);
    ctx->pc = 0x11EB98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB9Cu; }
    }
    if (ctx->pc != 0x11EB9Cu) { return; }
    ctx->pc = 0x11EB9Cu;
    // 0x11eb9c: 0xaec20000
    ctx->pc = 0x11eb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x11eba0: 0x260202d
    ctx->pc = 0x11eba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eba4: 0xc0497e6
    ctx->pc = 0x11EBA4u;
    SET_GPR_U32(ctx, 31, 0x11EBACu);
    ctx->pc = 0x11EBA8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EBACu; }
    }
    if (ctx->pc != 0x11EBACu) { return; }
    ctx->pc = 0x11EBACu;
    // 0x11ebac: 0x260202d
    ctx->pc = 0x11ebacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebb0: 0xc0497e6
    ctx->pc = 0x11EBB0u;
    SET_GPR_U32(ctx, 31, 0x11EBB8u);
    ctx->pc = 0x11EBB4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EBB8u; }
    }
    if (ctx->pc != 0x11EBB8u) { return; }
    ctx->pc = 0x11EBB8u;
    // 0x11ebb8: 0x40a02d
    ctx->pc = 0x11ebb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebbc: 0x118bc0
    ctx->pc = 0x11ebbcu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 15));
    // 0x11ebc0: 0x101780
    ctx->pc = 0x11ebc0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 30));
    // 0x11ebc4: 0x108082
    ctx->pc = 0x11ebc4u;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 16), 2));
    // 0x11ebc8: 0x511025
    ctx->pc = 0x11ebc8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11ebcc: 0x32100001
    ctx->pc = 0x11ebccu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), 1));
    // 0x11ebd0: 0x521025
    ctx->pc = 0x11ebd0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x11ebd4: 0xaed00008
    ctx->pc = 0x11ebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 16));
    // 0x11ebd8: 0x12800009
    ctx->pc = 0x11EBD8u;
    {
        const bool branch_taken_0x11ebd8 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x11EBDCu;
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x11ebd8) {
            ctx->pc = 0x11EC00u;
            goto label_11ec00;
        }
    }
    ctx->pc = 0x11EBE0u;
    // 0x11ebe0: 0x260202d
    ctx->pc = 0x11ebe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebe4: 0x0
    ctx->pc = 0x11ebe4u;
    // NOP
label_11ebe8:
    // 0x11ebe8: 0xc0497e6
    ctx->pc = 0x11EBE8u;
    SET_GPR_U32(ctx, 31, 0x11EBF0u);
    ctx->pc = 0x11EBECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x125F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EBF0u; }
    }
    if (ctx->pc != 0x11EBF0u) { return; }
    ctx->pc = 0x11EBF0u;
    // 0x11ebf0: 0x26b50001
    ctx->pc = 0x11ebf0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    // 0x11ebf4: 0x2b4102b
    ctx->pc = 0x11ebf4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x11ebf8: 0x1440fffb
    ctx->pc = 0x11EBF8u;
    {
        const bool branch_taken_0x11ebf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11EBFCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11ebf8) {
            ctx->pc = 0x11EBE8u;
            goto label_11ebe8;
        }
    }
    ctx->pc = 0x11EC00u;
label_11ec00:
    // 0x11ec00: 0x260202d
    ctx->pc = 0x11ec00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec04: 0xc0497b8
    ctx->pc = 0x11EC04u;
    SET_GPR_U32(ctx, 31, 0x11EC0Cu);
    ctx->pc = 0x11EC08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x125EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitNext_0x125ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EC0Cu; }
    }
    if (ctx->pc != 0x11EC0Cu) { return; }
    ctx->pc = 0x11EC0Cu;
    // 0x11ec0c: 0x240301bb
    ctx->pc = 0x11ec0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 443));
    // 0x11ec10: 0x54430008
    ctx->pc = 0x11EC10u;
    {
        const bool branch_taken_0x11ec10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x11ec10) {
            ctx->pc = 0x11EC14u;
            WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
            ctx->pc = 0x11EC34u;
            goto label_11ec34;
        }
    }
    ctx->pc = 0x11EC18u;
    // 0x11ec18: 0x24020001
    ctx->pc = 0x11ec18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ec1c: 0x260202d
    ctx->pc = 0x11ec1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec20: 0xaec2000c
    ctx->pc = 0x11ec20u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
    // 0x11ec24: 0xc047b18
    ctx->pc = 0x11EC24u;
    SET_GPR_U32(ctx, 31, 0x11EC2Cu);
    ctx->pc = 0x11EC28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11EC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        _system_header_0x11ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EC2Cu; }
    }
    if (ctx->pc != 0x11EC2Cu) { return; }
    ctx->pc = 0x11EC2Cu;
    // 0x11ec2c: 0x10000002
    ctx->pc = 0x11EC2Cu;
    {
        const bool branch_taken_0x11ec2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11EC30u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x11ec2c) {
            ctx->pc = 0x11EC38u;
            goto label_11ec38;
        }
    }
    ctx->pc = 0x11EC34u;
label_11ec34:
    // 0x11ec34: 0xdfbf0070
    ctx->pc = 0x11ec34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_11ec38:
    // 0x11ec38: 0x24020001
    ctx->pc = 0x11ec38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ec3c: 0xdfb60060
    ctx->pc = 0x11ec3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11ec40: 0xdfb50050
    ctx->pc = 0x11ec40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11ec44: 0xdfb40040
    ctx->pc = 0x11ec44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11ec48: 0xdfb30030
    ctx->pc = 0x11ec48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ec4c: 0xdfb20020
    ctx->pc = 0x11ec4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ec50: 0xdfb10010
    ctx->pc = 0x11ec50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ec54: 0xdfb00000
    ctx->pc = 0x11ec54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ec58: 0x3e00008
    ctx->pc = 0x11EC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EC5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EBE8u: goto label_11ebe8;
            case 0x11EC00u: goto label_11ec00;
            case 0x11EC34u: goto label_11ec34;
            case 0x11EC38u: goto label_11ec38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11EC60u;
}
