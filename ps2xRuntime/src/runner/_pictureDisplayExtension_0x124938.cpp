#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _pictureDisplayExtension
// Address: 0x124938 - 0x124a28
void _pictureDisplayExtension_0x124938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124938u;

    // 0x124938: 0x3c020017
    ctx->pc = 0x124938u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x12493c: 0x27bdffa0
    ctx->pc = 0x12493cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x124940: 0x8c431948
    ctx->pc = 0x124940u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 6472)));
    // 0x124944: 0xffbf0050
    ctx->pc = 0x124944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x124948: 0xffb40040
    ctx->pc = 0x124948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x12494c: 0xffb30030
    ctx->pc = 0x12494cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x124950: 0xffb20020
    ctx->pc = 0x124950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x124954: 0xffb10010
    ctx->pc = 0x124954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x124958: 0x1060000a
    ctx->pc = 0x124958u;
    {
        const bool branch_taken_0x124958 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x12495Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x124958) {
            ctx->pc = 0x124984u;
            goto label_124984;
        }
    }
    ctx->pc = 0x124960u;
    // 0x124960: 0x3c020017
    ctx->pc = 0x124960u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x124964: 0x8c4319c0
    ctx->pc = 0x124964u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 6592)));
    // 0x124968: 0x1060000b
    ctx->pc = 0x124968u;
    {
        const bool branch_taken_0x124968 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x12496Cu;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x124968) {
            ctx->pc = 0x124998u;
            goto label_124998;
        }
    }
    ctx->pc = 0x124970u;
    // 0x124970: 0x24120002
    ctx->pc = 0x124970u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 2));
    // 0x124974: 0x8c4419b0
    ctx->pc = 0x124974u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 6576)));
    // 0x124978: 0x24030003
    ctx->pc = 0x124978u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x12497c: 0x1000000b
    ctx->pc = 0x12497Cu;
    {
        const bool branch_taken_0x12497c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x124980u;
        if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
        if (branch_taken_0x12497c) {
            ctx->pc = 0x1249ACu;
            goto label_1249ac;
        }
    }
    ctx->pc = 0x124984u;
label_124984:
    // 0x124984: 0x3c020017
    ctx->pc = 0x124984u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x124988: 0x24030003
    ctx->pc = 0x124988u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x12498c: 0x8c4419ac
    ctx->pc = 0x12498cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 6572)));
    // 0x124990: 0x10830003
    ctx->pc = 0x124990u;
    {
        const bool branch_taken_0x124990 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x124994u;
        SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
        if (branch_taken_0x124990) {
            ctx->pc = 0x1249A0u;
            goto label_1249a0;
        }
    }
    ctx->pc = 0x124998u;
label_124998:
    // 0x124998: 0x10000004
    ctx->pc = 0x124998u;
    {
        const bool branch_taken_0x124998 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12499Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x124998) {
            ctx->pc = 0x1249ACu;
            goto label_1249ac;
        }
    }
    ctx->pc = 0x1249A0u;
label_1249a0:
    // 0x1249a0: 0x24120002
    ctx->pc = 0x1249a0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1249a4: 0x8c6219c0
    ctx->pc = 0x1249a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 6592)));
    // 0x1249a8: 0x82900b
    ctx->pc = 0x1249a8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 4));
label_1249ac:
    // 0x1249ac: 0x1a400016
    ctx->pc = 0x1249ACu;
    {
        const bool branch_taken_0x1249ac = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1249B0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1249ac) {
            ctx->pc = 0x124A08u;
            goto label_124a08;
        }
    }
    ctx->pc = 0x1249B4u;
    // 0x1249b4: 0x3c140017
    ctx->pc = 0x1249b4u;
    SET_GPR_S32(ctx, 20, ((uint32_t)23 << 16));
    // 0x1249b8: 0x3c130017
    ctx->pc = 0x1249b8u;
    SET_GPR_S32(ctx, 19, ((uint32_t)23 << 16));
    // 0x1249bc: 0x24040010
    ctx->pc = 0x1249bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
label_1249c0:
    // 0x1249c0: 0xc048fdc
    ctx->pc = 0x1249C0u;
    SET_GPR_U32(ctx, 31, 0x1249C8u);
    ctx->pc = 0x1249C4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1249C8u; }
    }
    if (ctx->pc != 0x1249C8u) { return; }
    ctx->pc = 0x1249C8u;
    // 0x1249c8: 0x26310001
    ctx->pc = 0x1249c8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1249cc: 0x268319e8
    ctx->pc = 0x1249ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 6632));
    // 0x1249d0: 0x24040001
    ctx->pc = 0x1249d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1249d4: 0x2031821
    ctx->pc = 0x1249d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1249d8: 0xc048fdc
    ctx->pc = 0x1249D8u;
    SET_GPR_U32(ctx, 31, 0x1249E0u);
    ctx->pc = 0x1249DCu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1249E0u; }
    }
    if (ctx->pc != 0x1249E0u) { return; }
    ctx->pc = 0x1249E0u;
    // 0x1249e0: 0xc048fdc
    ctx->pc = 0x1249E0u;
    SET_GPR_U32(ctx, 31, 0x1249E8u);
    ctx->pc = 0x1249E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1249E8u; }
    }
    if (ctx->pc != 0x1249E8u) { return; }
    ctx->pc = 0x1249E8u;
    // 0x1249e8: 0x266319f8
    ctx->pc = 0x1249e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 6648));
    // 0x1249ec: 0x24040001
    ctx->pc = 0x1249ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1249f0: 0x2038021
    ctx->pc = 0x1249f0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1249f4: 0xc048fdc
    ctx->pc = 0x1249F4u;
    SET_GPR_U32(ctx, 31, 0x1249FCu);
    ctx->pc = 0x1249F8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1249FCu; }
    }
    if (ctx->pc != 0x1249FCu) { return; }
    ctx->pc = 0x1249FCu;
    // 0x1249fc: 0x232182a
    ctx->pc = 0x1249fcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x124a00: 0x1460ffef
    ctx->pc = 0x124A00u;
    {
        const bool branch_taken_0x124a00 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x124A04u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x124a00) {
            ctx->pc = 0x1249C0u;
            goto label_1249c0;
        }
    }
    ctx->pc = 0x124A08u;
label_124a08:
    // 0x124a08: 0xdfbf0050
    ctx->pc = 0x124a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x124a0c: 0xdfb40040
    ctx->pc = 0x124a0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x124a10: 0xdfb30030
    ctx->pc = 0x124a10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124a14: 0xdfb20020
    ctx->pc = 0x124a14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124a18: 0xdfb10010
    ctx->pc = 0x124a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124a1c: 0xdfb00000
    ctx->pc = 0x124a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124a20: 0x3e00008
    ctx->pc = 0x124A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124A24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124984u: goto label_124984;
            case 0x124998u: goto label_124998;
            case 0x1249A0u: goto label_1249a0;
            case 0x1249ACu: goto label_1249ac;
            case 0x1249C0u: goto label_1249c0;
            case 0x124A08u: goto label_124a08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124A28u;
}
