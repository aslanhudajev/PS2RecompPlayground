#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _raise_r
// Address: 0x144bf0 - 0x144ce0
void _raise_r_0x144bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_raise_r");


    ctx->pc = 0x144bf0u;

label_144bf0:
    // 0x144bf0: 0x27bdffc0
    ctx->pc = 0x144bf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_144bf4:
    // 0x144bf4: 0xffb10010
    ctx->pc = 0x144bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_144bf8:
    // 0x144bf8: 0xffb20020
    ctx->pc = 0x144bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_144bfc:
    // 0x144bfc: 0xa0882d
    ctx->pc = 0x144bfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_144c00:
    // 0x144c00: 0xffb00000
    ctx->pc = 0x144c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_144c04:
    // 0x144c04: 0x902d
    ctx->pc = 0x144c04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144c08:
    // 0x144c08: 0xffbf0030
    ctx->pc = 0x144c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_144c0c:
    // 0x144c0c: 0x2e220020
    ctx->pc = 0x144c0cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 32));
label_144c10:
    // 0x144c10: 0x14400005
label_144c14:
    if (ctx->pc == 0x144C14u) {
        ctx->pc = 0x144C14u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x144C18u;
        goto label_144c18;
    }
    ctx->pc = 0x144C10u;
    {
        const bool branch_taken_0x144c10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x144C14u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x144c10) {
            ctx->pc = 0x144C28u;
            goto label_144c28;
        }
    }
    ctx->pc = 0x144C18u;
label_144c18:
    // 0x144c18: 0x24030016
    ctx->pc = 0x144c18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
label_144c1c:
    // 0x144c1c: 0x2402ffff
    ctx->pc = 0x144c1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_144c20:
    // 0x144c20: 0x10000029
label_144c24:
    if (ctx->pc == 0x144C24u) {
        ctx->pc = 0x144C24u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x144C28u;
        goto label_144c28;
    }
    ctx->pc = 0x144C20u;
    {
        const bool branch_taken_0x144c20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144C24u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x144c20) {
            ctx->pc = 0x144CC8u;
            goto label_144cc8;
        }
    }
    ctx->pc = 0x144C28u;
label_144c28:
    // 0x144c28: 0x8e0401d4
    ctx->pc = 0x144c28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_144c2c:
    // 0x144c2c: 0x14800007
label_144c30:
    if (ctx->pc == 0x144C30u) {
        ctx->pc = 0x144C30u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x144C34u;
        goto label_144c34;
    }
    ctx->pc = 0x144C2Cu;
    {
        const bool branch_taken_0x144c2c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x144C30u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x144c2c) {
            ctx->pc = 0x144C4Cu;
            goto label_144c4c;
        }
    }
    ctx->pc = 0x144C34u;
label_144c34:
    // 0x144c34: 0xc0512bc
label_144c38:
    if (ctx->pc == 0x144C38u) {
        ctx->pc = 0x144C38u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x144C3Cu;
        goto label_144c3c;
    }
    ctx->pc = 0x144C34u;
    SET_GPR_U32(ctx, 31, 0x144C3Cu);
    ctx->pc = 0x144C38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x144AF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _init_signal_r_0x144af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C3Cu; }
        else if (ctx->pc != 0x144C3Cu) { ctx->pc = 0x144C3Cu; }
    }
    if (ctx->pc != 0x144C3Cu) { return; }
    ctx->pc = 0x144C3Cu;
label_144c3c:
    // 0x144c3c: 0x14400022
label_144c40:
    if (ctx->pc == 0x144C40u) {
        ctx->pc = 0x144C40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x144C44u;
        goto label_144c44;
    }
    ctx->pc = 0x144C3Cu;
    {
        const bool branch_taken_0x144c3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x144C40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x144c3c) {
            ctx->pc = 0x144CC8u;
            goto label_144cc8;
        }
    }
    ctx->pc = 0x144C44u;
label_144c44:
    // 0x144c44: 0x8e0401d4
    ctx->pc = 0x144c44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_144c48:
    // 0x144c48: 0x112880
    ctx->pc = 0x144c48u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 2));
label_144c4c:
    // 0x144c4c: 0xa41021
    ctx->pc = 0x144c4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_144c50:
    // 0x144c50: 0x8c430000
    ctx->pc = 0x144c50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_144c54:
    // 0x144c54: 0x1060000c
label_144c58:
    if (ctx->pc == 0x144C58u) {
        ctx->pc = 0x144C5Cu;
        goto label_144c5c;
    }
    ctx->pc = 0x144C54u;
    {
        const bool branch_taken_0x144c54 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x144c54) {
            ctx->pc = 0x144C88u;
            goto label_144c88;
        }
    }
    ctx->pc = 0x144C5Cu;
label_144c5c:
    // 0x144c5c: 0x1c600006
label_144c60:
    if (ctx->pc == 0x144C60u) {
        ctx->pc = 0x144C60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x144C64u;
        goto label_144c64;
    }
    ctx->pc = 0x144C5Cu;
    {
        const bool branch_taken_0x144c5c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x144C60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x144c5c) {
            ctx->pc = 0x144C78u;
            goto label_144c78;
        }
    }
    ctx->pc = 0x144C64u;
label_144c64:
    // 0x144c64: 0x2402ffff
    ctx->pc = 0x144c64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_144c68:
    // 0x144c68: 0x1062000f
label_144c6c:
    if (ctx->pc == 0x144C6Cu) {
        ctx->pc = 0x144C6Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x144C70u;
        goto label_144c70;
    }
    ctx->pc = 0x144C68u;
    {
        const bool branch_taken_0x144c68 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x144C6Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        if (branch_taken_0x144c68) {
            ctx->pc = 0x144CA8u;
            goto label_144ca8;
        }
    }
    ctx->pc = 0x144C70u;
label_144c70:
    // 0x144c70: 0x10000011
label_144c74:
    if (ctx->pc == 0x144C74u) {
        ctx->pc = 0x144C74u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x144C78u;
        goto label_144c78;
    }
    ctx->pc = 0x144C70u;
    {
        const bool branch_taken_0x144c70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144C74u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x144c70) {
            ctx->pc = 0x144CB8u;
            goto label_144cb8;
        }
    }
    ctx->pc = 0x144C78u;
label_144c78:
    // 0x144c78: 0x10620012
label_144c7c:
    if (ctx->pc == 0x144C7Cu) {
        ctx->pc = 0x144C7Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x144C80u;
        goto label_144c80;
    }
    ctx->pc = 0x144C78u;
    {
        const bool branch_taken_0x144c78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x144C7Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        if (branch_taken_0x144c78) {
            ctx->pc = 0x144CC4u;
            goto label_144cc4;
        }
    }
    ctx->pc = 0x144C80u;
label_144c80:
    // 0x144c80: 0x1000000d
label_144c84:
    if (ctx->pc == 0x144C84u) {
        ctx->pc = 0x144C84u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x144C88u;
        goto label_144c88;
    }
    ctx->pc = 0x144C80u;
    {
        const bool branch_taken_0x144c80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144C84u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x144c80) {
            ctx->pc = 0x144CB8u;
            goto label_144cb8;
        }
    }
    ctx->pc = 0x144C88u;
label_144c88:
    // 0x144c88: 0xc0513a8
label_144c8c:
    if (ctx->pc == 0x144C8Cu) {
        ctx->pc = 0x144C8Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x144C90u;
        goto label_144c90;
    }
    ctx->pc = 0x144C88u;
    SET_GPR_U32(ctx, 31, 0x144C90u);
    ctx->pc = 0x144C8Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x144EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getpid_r_0x144ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C90u; }
        else if (ctx->pc != 0x144C90u) { ctx->pc = 0x144C90u; }
    }
    if (ctx->pc != 0x144C90u) { return; }
    ctx->pc = 0x144C90u;
label_144c90:
    // 0x144c90: 0x200202d
    ctx->pc = 0x144c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_144c94:
    // 0x144c94: 0x40282d
    ctx->pc = 0x144c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144c98:
    // 0x144c98: 0xc051390
label_144c9c:
    if (ctx->pc == 0x144C9Cu) {
        ctx->pc = 0x144C9Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x144CA0u;
        goto label_144ca0;
    }
    ctx->pc = 0x144C98u;
    SET_GPR_U32(ctx, 31, 0x144CA0u);
    ctx->pc = 0x144C9Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x144E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        _kill_r_0x144e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144CA0u; }
        else if (ctx->pc != 0x144CA0u) { ctx->pc = 0x144CA0u; }
    }
    if (ctx->pc != 0x144CA0u) { return; }
    ctx->pc = 0x144CA0u;
label_144ca0:
    // 0x144ca0: 0x1000000a
label_144ca4:
    if (ctx->pc == 0x144CA4u) {
        ctx->pc = 0x144CA4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x144CA8u;
        goto label_144ca8;
    }
    ctx->pc = 0x144CA0u;
    {
        const bool branch_taken_0x144ca0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144CA4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x144ca0) {
            ctx->pc = 0x144CCCu;
            goto label_144ccc;
        }
    }
    ctx->pc = 0x144CA8u;
label_144ca8:
    // 0x144ca8: 0x24020016
    ctx->pc = 0x144ca8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 22));
label_144cac:
    // 0x144cac: 0x24120001
    ctx->pc = 0x144cacu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_144cb0:
    // 0x144cb0: 0x10000004
label_144cb4:
    if (ctx->pc == 0x144CB4u) {
        ctx->pc = 0x144CB4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x144CB8u;
        goto label_144cb8;
    }
    ctx->pc = 0x144CB0u;
    {
        const bool branch_taken_0x144cb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144CB4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x144cb0) {
            ctx->pc = 0x144CC4u;
            goto label_144cc4;
        }
    }
    ctx->pc = 0x144CB8u;
label_144cb8:
    // 0x144cb8: 0x220202d
    ctx->pc = 0x144cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_144cbc:
    // 0x144cbc: 0x60f809
label_144cc0:
    if (ctx->pc == 0x144CC0u) {
        ctx->pc = 0x144CC0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x144CC4u;
        goto label_144cc4;
    }
    ctx->pc = 0x144CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x144CC4u);
        ctx->pc = 0x144CC0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144BF0u: goto label_144bf0;
            case 0x144BF4u: goto label_144bf4;
            case 0x144BF8u: goto label_144bf8;
            case 0x144BFCu: goto label_144bfc;
            case 0x144C00u: goto label_144c00;
            case 0x144C04u: goto label_144c04;
            case 0x144C08u: goto label_144c08;
            case 0x144C0Cu: goto label_144c0c;
            case 0x144C10u: goto label_144c10;
            case 0x144C14u: goto label_144c14;
            case 0x144C18u: goto label_144c18;
            case 0x144C1Cu: goto label_144c1c;
            case 0x144C20u: goto label_144c20;
            case 0x144C24u: goto label_144c24;
            case 0x144C28u: goto label_144c28;
            case 0x144C2Cu: goto label_144c2c;
            case 0x144C30u: goto label_144c30;
            case 0x144C34u: goto label_144c34;
            case 0x144C38u: goto label_144c38;
            case 0x144C3Cu: goto label_144c3c;
            case 0x144C40u: goto label_144c40;
            case 0x144C44u: goto label_144c44;
            case 0x144C48u: goto label_144c48;
            case 0x144C4Cu: goto label_144c4c;
            case 0x144C50u: goto label_144c50;
            case 0x144C54u: goto label_144c54;
            case 0x144C58u: goto label_144c58;
            case 0x144C5Cu: goto label_144c5c;
            case 0x144C60u: goto label_144c60;
            case 0x144C64u: goto label_144c64;
            case 0x144C68u: goto label_144c68;
            case 0x144C6Cu: goto label_144c6c;
            case 0x144C70u: goto label_144c70;
            case 0x144C74u: goto label_144c74;
            case 0x144C78u: goto label_144c78;
            case 0x144C7Cu: goto label_144c7c;
            case 0x144C80u: goto label_144c80;
            case 0x144C84u: goto label_144c84;
            case 0x144C88u: goto label_144c88;
            case 0x144C8Cu: goto label_144c8c;
            case 0x144C90u: goto label_144c90;
            case 0x144C94u: goto label_144c94;
            case 0x144C98u: goto label_144c98;
            case 0x144C9Cu: goto label_144c9c;
            case 0x144CA0u: goto label_144ca0;
            case 0x144CA4u: goto label_144ca4;
            case 0x144CA8u: goto label_144ca8;
            case 0x144CACu: goto label_144cac;
            case 0x144CB0u: goto label_144cb0;
            case 0x144CB4u: goto label_144cb4;
            case 0x144CB8u: goto label_144cb8;
            case 0x144CBCu: goto label_144cbc;
            case 0x144CC0u: goto label_144cc0;
            case 0x144CC4u: goto label_144cc4;
            case 0x144CC8u: goto label_144cc8;
            case 0x144CCCu: goto label_144ccc;
            case 0x144CD0u: goto label_144cd0;
            case 0x144CD4u: goto label_144cd4;
            case 0x144CD8u: goto label_144cd8;
            case 0x144CDCu: goto label_144cdc;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x144CC4u; }
            if (ctx->pc != 0x144CC4u) { return; }
        }
    }
    ctx->pc = 0x144CC4u;
label_144cc4:
    // 0x144cc4: 0x240102d
    ctx->pc = 0x144cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_144cc8:
    // 0x144cc8: 0xdfbf0030
    ctx->pc = 0x144cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_144ccc:
    // 0x144ccc: 0xdfb20020
    ctx->pc = 0x144cccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_144cd0:
    // 0x144cd0: 0xdfb10010
    ctx->pc = 0x144cd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_144cd4:
    // 0x144cd4: 0xdfb00000
    ctx->pc = 0x144cd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_144cd8:
    // 0x144cd8: 0x3e00008
label_144cdc:
    if (ctx->pc == 0x144CDCu) {
        ctx->pc = 0x144CDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x144CE0u;
        goto label_fallthrough_0x144cd8;
    }
    ctx->pc = 0x144CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144CDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144BF0u: goto label_144bf0;
            case 0x144BF4u: goto label_144bf4;
            case 0x144BF8u: goto label_144bf8;
            case 0x144BFCu: goto label_144bfc;
            case 0x144C00u: goto label_144c00;
            case 0x144C04u: goto label_144c04;
            case 0x144C08u: goto label_144c08;
            case 0x144C0Cu: goto label_144c0c;
            case 0x144C10u: goto label_144c10;
            case 0x144C14u: goto label_144c14;
            case 0x144C18u: goto label_144c18;
            case 0x144C1Cu: goto label_144c1c;
            case 0x144C20u: goto label_144c20;
            case 0x144C24u: goto label_144c24;
            case 0x144C28u: goto label_144c28;
            case 0x144C2Cu: goto label_144c2c;
            case 0x144C30u: goto label_144c30;
            case 0x144C34u: goto label_144c34;
            case 0x144C38u: goto label_144c38;
            case 0x144C3Cu: goto label_144c3c;
            case 0x144C40u: goto label_144c40;
            case 0x144C44u: goto label_144c44;
            case 0x144C48u: goto label_144c48;
            case 0x144C4Cu: goto label_144c4c;
            case 0x144C50u: goto label_144c50;
            case 0x144C54u: goto label_144c54;
            case 0x144C58u: goto label_144c58;
            case 0x144C5Cu: goto label_144c5c;
            case 0x144C60u: goto label_144c60;
            case 0x144C64u: goto label_144c64;
            case 0x144C68u: goto label_144c68;
            case 0x144C6Cu: goto label_144c6c;
            case 0x144C70u: goto label_144c70;
            case 0x144C74u: goto label_144c74;
            case 0x144C78u: goto label_144c78;
            case 0x144C7Cu: goto label_144c7c;
            case 0x144C80u: goto label_144c80;
            case 0x144C84u: goto label_144c84;
            case 0x144C88u: goto label_144c88;
            case 0x144C8Cu: goto label_144c8c;
            case 0x144C90u: goto label_144c90;
            case 0x144C94u: goto label_144c94;
            case 0x144C98u: goto label_144c98;
            case 0x144C9Cu: goto label_144c9c;
            case 0x144CA0u: goto label_144ca0;
            case 0x144CA4u: goto label_144ca4;
            case 0x144CA8u: goto label_144ca8;
            case 0x144CACu: goto label_144cac;
            case 0x144CB0u: goto label_144cb0;
            case 0x144CB4u: goto label_144cb4;
            case 0x144CB8u: goto label_144cb8;
            case 0x144CBCu: goto label_144cbc;
            case 0x144CC0u: goto label_144cc0;
            case 0x144CC4u: goto label_144cc4;
            case 0x144CC8u: goto label_144cc8;
            case 0x144CCCu: goto label_144ccc;
            case 0x144CD0u: goto label_144cd0;
            case 0x144CD4u: goto label_144cd4;
            case 0x144CD8u: goto label_144cd8;
            case 0x144CDCu: goto label_144cdc;
            default: break;
        }
        return;
    }
label_fallthrough_0x144cd8:
    ctx->pc = 0x144CE0u;
}
