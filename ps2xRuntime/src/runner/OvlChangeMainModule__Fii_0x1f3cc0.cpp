#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: OvlChangeMainModule__Fii
// Address: 0x1f3cc0 - 0x1f3dac
void OvlChangeMainModule__Fii_0x1f3cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("OvlChangeMainModule__Fii");


    ctx->pc = 0x1f3cc0u;

    // 0x1f3cc0: 0x27bdffe0
    ctx->pc = 0x1f3cc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f3cc4: 0x7fbf0010
    ctx->pc = 0x1f3cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1f3cc8: 0x2403000a
    ctx->pc = 0x1f3cc8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f3ccc: 0x10830007
    ctx->pc = 0x1F3CCCu;
    {
        const bool branch_taken_0x1f3ccc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1F3CD0u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        if (branch_taken_0x1f3ccc) {
            ctx->pc = 0x1F3CECu;
            goto label_1f3cec;
        }
    }
    ctx->pc = 0x1F3CD4u;
    // 0x1f3cd4: 0x3c030027
    ctx->pc = 0x1f3cd4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1f3cd8: 0x42040
    ctx->pc = 0x1f3cd8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1f3cdc: 0x2463c900
    ctx->pc = 0x1f3cdcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953216));
    // 0x1f3ce0: 0x641821
    ctx->pc = 0x1f3ce0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f3ce4: 0x1000000d
    ctx->pc = 0x1F3CE4u;
    {
        const bool branch_taken_0x1f3ce4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F3CE8u;
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x1f3ce4) {
            ctx->pc = 0x1F3D1Cu;
            goto label_1f3d1c;
        }
    }
    ctx->pc = 0x1F3CECu;
label_1f3cec:
    // 0x1f3cec: 0x24030002
    ctx->pc = 0x1f3cecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f3cf0: 0x10a3000a
    ctx->pc = 0x1F3CF0u;
    {
        const bool branch_taken_0x1f3cf0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1F3CF4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 13));
        if (branch_taken_0x1f3cf0) {
            ctx->pc = 0x1F3D1Cu;
            goto label_1f3d1c;
        }
    }
    ctx->pc = 0x1F3CF8u;
    // 0x1f3cf8: 0x24030001
    ctx->pc = 0x1f3cf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3cfc: 0x10a30004
    ctx->pc = 0x1F3CFCu;
    {
        const bool branch_taken_0x1f3cfc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1F3D00u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x1f3cfc) {
            ctx->pc = 0x1F3D10u;
            goto label_1f3d10;
        }
    }
    ctx->pc = 0x1F3D04u;
    // 0x1f3d04: 0x10000005
    ctx->pc = 0x1F3D04u;
    {
        const bool branch_taken_0x1f3d04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F3D08u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 11));
        if (branch_taken_0x1f3d04) {
            ctx->pc = 0x1F3D1Cu;
            goto label_1f3d1c;
        }
    }
    ctx->pc = 0x1F3D0Cu;
    // 0x1f3d0c: 0x2410000c
    ctx->pc = 0x1f3d0cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 12));
label_1f3d10:
    // 0x1f3d10: 0x10000002
    ctx->pc = 0x1F3D10u;
    {
        const bool branch_taken_0x1f3d10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3d10) {
            ctx->pc = 0x1F3D1Cu;
            goto label_1f3d1c;
        }
    }
    ctx->pc = 0x1F3D18u;
    // 0x1f3d18: 0x2410000d
    ctx->pc = 0x1f3d18u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 13));
label_1f3d1c:
    // 0x1f3d1c: 0x600001f
    ctx->pc = 0x1F3D1Cu;
    {
        const bool branch_taken_0x1f3d1c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1f3d1c) {
            ctx->pc = 0x1F3D9Cu;
            goto label_1f3d9c;
        }
    }
    ctx->pc = 0x1F3D24u;
    // 0x1f3d24: 0x3c020051
    ctx->pc = 0x1f3d24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1f3d28: 0x24443430
    ctx->pc = 0x1f3d28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13360));
    // 0x1f3d2c: 0xc080784
    ctx->pc = 0x1F3D2Cu;
    SET_GPR_U32(ctx, 31, 0x1F3D34u);
    ctx->pc = 0x1F3D30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x201E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        loadModule__15OverlayMgrClassFi_0x201e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D34u; }
        else if (ctx->pc != 0x1F3D34u) { ctx->pc = 0x1F3D34u; }
    }
    if (ctx->pc != 0x1F3D34u) { return; }
    ctx->pc = 0x1F3D34u;
    // 0x1f3d34: 0x24030002
    ctx->pc = 0x1f3d34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f3d38: 0x12030014
    ctx->pc = 0x1F3D38u;
    {
        const bool branch_taken_0x1f3d38 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x1f3d38) {
            ctx->pc = 0x1F3D8Cu;
            goto label_1f3d8c;
        }
    }
    ctx->pc = 0x1F3D40u;
    // 0x1f3d40: 0x2403000d
    ctx->pc = 0x1f3d40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1f3d44: 0x12030011
    ctx->pc = 0x1F3D44u;
    {
        const bool branch_taken_0x1f3d44 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x1f3d44) {
            ctx->pc = 0x1F3D8Cu;
            goto label_1f3d8c;
        }
    }
    ctx->pc = 0x1F3D4Cu;
    // 0x1f3d4c: 0x2403000b
    ctx->pc = 0x1f3d4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11));
    // 0x1f3d50: 0x1203000a
    ctx->pc = 0x1F3D50u;
    {
        const bool branch_taken_0x1f3d50 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x1f3d50) {
            ctx->pc = 0x1F3D7Cu;
            goto label_1f3d7c;
        }
    }
    ctx->pc = 0x1F3D58u;
    // 0x1f3d58: 0x2403000c
    ctx->pc = 0x1f3d58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f3d5c: 0x12030003
    ctx->pc = 0x1F3D5Cu;
    {
        const bool branch_taken_0x1f3d5c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        if (branch_taken_0x1f3d5c) {
            ctx->pc = 0x1F3D6Cu;
            goto label_1f3d6c;
        }
    }
    ctx->pc = 0x1F3D64u;
    // 0x1f3d64: 0x1000000e
    ctx->pc = 0x1F3D64u;
    {
        const bool branch_taken_0x1f3d64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F3D68u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1f3d64) {
            ctx->pc = 0x1F3DA0u;
            goto label_1f3da0;
        }
    }
    ctx->pc = 0x1F3D6Cu;
label_1f3d6c:
    // 0x1f3d6c: 0x3c020051
    ctx->pc = 0x1f3d6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1f3d70: 0x24443430
    ctx->pc = 0x1f3d70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13360));
    // 0x1f3d74: 0xc080784
    ctx->pc = 0x1F3D74u;
    SET_GPR_U32(ctx, 31, 0x1F3D7Cu);
    ctx->pc = 0x1F3D78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x201E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        loadModule__15OverlayMgrClassFi_0x201e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D7Cu; }
        else if (ctx->pc != 0x1F3D7Cu) { ctx->pc = 0x1F3D7Cu; }
    }
    if (ctx->pc != 0x1F3D7Cu) { return; }
    ctx->pc = 0x1F3D7Cu;
label_1f3d7c:
    // 0x1f3d7c: 0x3c020051
    ctx->pc = 0x1f3d7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1f3d80: 0x24443430
    ctx->pc = 0x1f3d80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13360));
    // 0x1f3d84: 0xc080784
    ctx->pc = 0x1F3D84u;
    SET_GPR_U32(ctx, 31, 0x1F3D8Cu);
    ctx->pc = 0x1F3D88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x201E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        loadModule__15OverlayMgrClassFi_0x201e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D8Cu; }
        else if (ctx->pc != 0x1F3D8Cu) { ctx->pc = 0x1F3D8Cu; }
    }
    if (ctx->pc != 0x1F3D8Cu) { return; }
    ctx->pc = 0x1F3D8Cu;
label_1f3d8c:
    // 0x1f3d8c: 0x3c020051
    ctx->pc = 0x1f3d8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1f3d90: 0x24443430
    ctx->pc = 0x1f3d90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13360));
    // 0x1f3d94: 0xc080784
    ctx->pc = 0x1F3D94u;
    SET_GPR_U32(ctx, 31, 0x1F3D9Cu);
    ctx->pc = 0x1F3D98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x201E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        loadModule__15OverlayMgrClassFi_0x201e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D9Cu; }
        else if (ctx->pc != 0x1F3D9Cu) { ctx->pc = 0x1F3D9Cu; }
    }
    if (ctx->pc != 0x1F3D9Cu) { return; }
    ctx->pc = 0x1F3D9Cu;
label_1f3d9c:
    // 0x1f3d9c: 0x7bbf0010
    ctx->pc = 0x1f3d9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f3da0:
    // 0x1f3da0: 0x7bb00000
    ctx->pc = 0x1f3da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3da4: 0x3e00008
    ctx->pc = 0x1F3DA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3DA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3CECu: goto label_1f3cec;
            case 0x1F3D10u: goto label_1f3d10;
            case 0x1F3D1Cu: goto label_1f3d1c;
            case 0x1F3D6Cu: goto label_1f3d6c;
            case 0x1F3D7Cu: goto label_1f3d7c;
            case 0x1F3D8Cu: goto label_1f3d8c;
            case 0x1F3D9Cu: goto label_1f3d9c;
            case 0x1F3DA0u: goto label_1f3da0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3DACu;
}
